#include <stdio.h>
#include "../lib/lua/src/lua.h"
#include "../lib/lua/src/lualib.h"
#include "../lib/lua/src/lauxlib.h"


void lua_example_dotfile(void){
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "./scripts/factorial.lua");
    lua_close(L);
}

void lua_example_getvar(void){
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dostring(L, "some_var = 486");
    lua_getglobal(L, "some_var");
    lua_Number some_var_in_c = lua_tonumber(L, -1);
    printf("the value of some_var inside C: %d\n", (int)some_var_in_c);
    lua_close(L);
}

void lua_example_stack(void){
    lua_State* L = luaL_newstate();
    lua_pushnumber(L, 286);
    lua_pushnumber(L, 300);
    lua_pushnumber(L, 200);
    lua_pushnumber(L, 3044);

    lua_Number element;
    element = lua_tonumber(L, -1);
    printf("The last added element in position 3 of the stack is %d\n", (int)element);
    lua_remove(L, 2);
    element = lua_tonumber(L, 2);
    printf("The last added element in position 2 of the stack is %d\n", (int)element);
    for (int i = 1; i <= 4; i++) {
        element = lua_tonumber(L, i);
        printf("the numbers in stack are %d\n", (int)element);
    }

    lua_close(L);
}

void lua_example_call_function(void){
    lua_State* L = luaL_newstate();
    if (luaL_dofile(L, "./scripts/pythagoras.lua") != LUA_OK){
        luaL_error(L, "error: %s\n", lua_tostring(L, -1));
    }
    lua_getglobal(L, "pythagoras");
    if (lua_isfunction(L, -1)){
        lua_pushnumber(L, 3); //first arg for lua function
        lua_pushnumber(L, 4); //second arg for lua function
        const int NUM_ARGS = 2;
        const int HOW_MANY_RETURNS = 1;
        if (lua_pcall(L, NUM_ARGS, HOW_MANY_RETURNS, 0) != LUA_OK){
            // TODO: error
        }else {
            lua_Number pythaforas_result = lua_tonumber(L, -1);

            printf("the pythagoras of 3 and 4 is = %f\n", (float) pythaforas_result);
        }
    }
    lua_close(L);
}

int native_pythagoras(lua_State* L){
    lua_Number b = lua_tonumber(L, -1);
    lua_Number a = lua_tonumber(L, -2);
    float result = (float)a*a + (float)b*b;
    return result;
}

void lua_example_call_c_function(void){
    lua_State* L = luaL_newstate();
    lua_pushcfunction(L, native_pythagoras);
    lua_setglobal(L, "native_pythagoras");
    luaL_dofile(L, "./scripts/pythagoras-native.lua");
    lua_setglobal(L, "pythagoras");
    if (lua_isfunction(L, -1)) {
        lua_pushnumber(L, 3);
        lua_pushnumber(L, 4);
        const int NUM_ARGS = 2;
        const int HOW_MANY_RETURNS = 1;
        lua_pcall(L, NUM_ARGS, HOW_MANY_RETURNS, 0);
        lua_Number = result = lua_tonumber(L, -1);
        printf("Native pythagpras (3,4) = %f\n", (float)result);
    }
    lua_close(L);
}

int main(int argc, char *argv[]){
//    lua_example_dotfile();
//    lua_example_getvar();
//    lua_example_stack();
//    lua_example_call_function();
    lua_example_call_c_function();
    printf("hello");
    return 0;
}

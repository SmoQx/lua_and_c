#include <stdio.h>

int a(int number){
    if (number == 1){
        char a[] = "string";
        printf("hello World!%s \n", a);
        return 0;
    };
    return 1;
};

int main(){
    int what_was_returned;
    what_was_returned = a(1);
    printf("What was returned %i", what_was_returned);
    return 0;
};

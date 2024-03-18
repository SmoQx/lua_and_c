#include <stdio.h>
#include <string.h>


#define STRING_LENGHT 50


void reverse_string(char reversed_string[], char user_string[]) {
    int reversed_counter = strlen(user_string) - 1;
    printf("%s\n", user_string);
    for (int i = 0; i <= strlen(user_string); i++) {
        printf("%d\n", reversed_counter);
        reversed_string[i] = user_string[reversed_counter];
        printf("%c\n", user_string[reversed_counter]);
        reversed_counter--;

    }
}


int main() {
    char user_input[STRING_LENGHT];
    char reversed_string[STRING_LENGHT];
//    scanf("%s", user_input);
    fgets(user_input, sizeof(user_input), stdin);
    reverse_string(reversed_string, user_input);
    printf("\n%s its your text which is reversed", reversed_string);
}

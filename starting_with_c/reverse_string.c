#include <stdio.h>
#include <string.h>


#define STRING_LENGHT 50


void reverse_string(char reversed_string[], char user_string[]) {
    int reversed_counter = strlen(user_string);
    char temp[2];
    for (int i = 0; i <= strlen(user_string); i++) {
        char temp[] = user_string[reversed_counter] + '\0';
        strcat(reversed_string, temp);
        printf("%c\n", user_string[reversed_counter]);
        reversed_counter--;

    }
}


int main() {
    char user_input[STRING_LENGHT];
    char reversed_string[STRING_LENGHT];
    scanf("%s", user_input);
    reverse_string(reversed_string, user_input);
    printf("\n%s its your text which is reversed", reversed_string);
}

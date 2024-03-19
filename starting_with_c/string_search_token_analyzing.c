#include <ctype.h>
#include <stdio.h>
#include <string.h>


void search_character(void) {
    char str[] = "The quick brown fox";
    char ch = 'q';
    char *pGot_char = NULL;
    pGot_char = strchr(str, ch);
    printf("%d, %s\n", *pGot_char, pGot_char);
}


void search_string(void) {
    char str[] = "Every dog has his day";
    char word[] = "dog";
    char *p_Found = NULL;
    p_Found = strstr(str, word);
    printf("%d, %s\n", *p_Found, p_Found);
}


void search_token(void) {
    char str[80] = "Hello how are you - my name is - jason";
    const char s[2] = "-";
    char *token;

    token = strtok(str, s);

    while (token != NULL) {
        printf(" %s\n", token);

        token = strtok(NULL, s);
    }
}


void find_nums_letters_in_string(void) {
    char buff[100];
    int n_letters = 0;
    int n_digits = 0;
    int n_punct = 0;

    printf("Enter a string i'll find the number of letters numbers and punctuations\n");
    scanf("%s", buff);

    int i = 0;
    while (buff[i]) {
        if (isalpha(buff[i])) {
            ++n_letters;
        } else if (isdigit(buff[i])) {
            ++n_digits;
        } else if (ispunct(buff[i])) {
            ++n_punct;
        }
        i++;
    }
    printf("Found %d number of letters, %d number of numbers, %d number of punctuations\n", n_letters, n_digits, n_punct);

}


int main() {
    search_character();
    search_string();
    search_token();
    find_nums_letters_in_string();
    return 0;
}



#include <stdio.h>


int count_len(const char *string) {
    int len = 0;
    while (*string) {
        string++;
        len++;
    }
    return len;
}


int main(void) {
    char text[] = "This";
    printf("%s is %d characters long", text, count_len(text));
    return 0;
}

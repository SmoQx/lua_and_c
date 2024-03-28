#include <stdio.h>


int count_len(const char *string) {
    const char *ptr = string;
    while (*ptr) {
        ptr++;
    }
    return ptr - string;
}


int main(void) {
    char text[] = "This";
    printf("%s is %d characters long", text, count_len(text));
    return 0;
}

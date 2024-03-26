#include <stdio.h>


int count_len(const char *string) {
    const void *ptr = string;
    while (*string) {
        string++;
    }
    return (void*)string - ptr;
}


int main(void) {
    char text[] = "This";
    printf("%s is %d characters long", text, count_len(text));
    return 0;
}

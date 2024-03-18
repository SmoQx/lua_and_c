#include <stdio.h>
#include <string.h>


int main(void) {
    char my_string[] = "my string";
    printf("lenght of a %s is %d", my_string, strlen(my_string));
    char src[50], dest[50];
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");
    printf("\n\"%s\" source, \"%s\" destination\n", src, dest);
    strcpy(dest, src);
    printf("\n\"%s\" source, \"%s\" destination\n", src, dest);
    char src2[40];
    char dest2[12];

    memset(dest2,'\0', sizeof(dest2));
    strcpy(src2, "Hello how are you doing");
    strncpy(dest2, src2, 10);
    printf("\n\"%s\" source, \"%s\" destination\n\n", src2, dest2);
    
    strcat(src, dest);
    printf("%s\n\n", src);
    
    strncat(src, dest, 10);
    printf("%s\n\n", src);
    
    printf("strnigs are the same to the 10th character if its true it returns 0\n");
    printf("%d \n\n", strncmp(src, dest, 10));

    printf("%d\n\n", strcmp("A", "A"));
    printf("%d\n\n", strcmp("B", "A"));
    printf("%d\n\n", strcmp("A", "B"));
    printf("%d\n\n", strcmp("A", "ACA"));
    printf("%d\n\n", strcmp("A", "a"));


    return 0;
}

#include <stdio.h>
#include <stdlib.h>


enum direction{
NORTH = 1,
SOUTH = 2,
EAST = 3,
WEST = 4
};


int lenght_of_string(char string[]) {
    int lenght = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        lenght++;   
    }
    return lenght;
}


char* concat(char str1[], char str2[])
{
    int total_leanght = lenght_of_string(str1) + lenght_of_string(str2);
    char* result = malloc(total_leanght + 1);
    int i = 0, j = 0;

    for (i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }

     for ( j = 0;  str2[j] != '\0';  ++j )
        result[i + j] = str2[j];

    result[i+j] = '\0';
    return result;
}


int main() {
    char word[] = "Hello World!";
    char word2[] = "Bye!";
    int how_long = sizeof(word);
    printf("%s its %d letters long", word, how_long);
    printf("\n%d", NORTH);
    printf("\nthe string Hello World! is %d", lenght_of_string("Hello World!"));
    printf("\n %s", concat(word, word2));
    return 0;
}

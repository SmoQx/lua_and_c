#include <stdio.h>


void pointers(void) {
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count = %i, x = %i, int_pointer = %p\n\
Their adrresses are\n\
*count = %p\n\
*x = %p\n\
int_pointer = %p\n", count, x, int_pointer, &count, &x, &int_pointer);

    x = 20;

    printf("After changing x to 20\n");
    printf("count = %i, x = %i, int_pointer = %p\n\
Their adrresses are\n\
*count = %p\n\
*x = %p\n\
int_pointer = %p\n", count, x, int_pointer, &count, &x, &int_pointer);
}


void pointers2(void) {
    int number = 0;
    int *p_number = NULL;

    number = 10;
    printf("number's address %p\n", &number);
    printf("number's value %d\n\n", number);

    p_number = &number;

    printf("p_number's address %p\n", (void*)&p_number);
    printf("p_number's size %zd bytes\n", sizeof(p_number));
    printf("p_number's valu %p\n", p_number);
    printf("value pointed to %d\n", *p_number);
}


void pointers_challeng() {
    int var = 20;
    int *p_var = NULL;
    p_var = &var;

    printf("p_var's address %p\n", (void*)&p_var);
    printf("p_var's value %p\n", p_var);
    printf("value pointed to %d\n", *p_var);
}


int main(void) {
    pointers_challeng();
    return 0;
}

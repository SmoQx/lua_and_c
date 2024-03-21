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


void pointers3(void) {
    int number = 10;
    int *p_number = &number;
    printf("Number of number: %d\n", number);
    *p_number += 25;
    printf("After cahnging *p_number += 25\n");
    printf("Number of number: %d\n", number);
}


void constant_value_with_pointer(void) {
    long value = 1000;
    long new = 10;
    const long *p_value = &value;
    long *const p_new = &new;
    //const long *const p_new = &new; // a declaretion of a constant pointer which you cannot cahnge its addres and the value which is it pointing to
    printf("value: %ld its pointer: %p and %p\n", value, p_value, &value);

    value = 100;

    printf("value: %ld its pointer: %p and %p\n", value, p_value, &value);
//    p_new = &value; cannot do it
    *p_new = value; // addres doesnt change but the value can
    printf("the value of what p_new is pointing at changed to value %ld\n", *p_new);
    p_value = &new; //but you can change the value either way ?!
    printf("The value of waht p_value is poiting to%ld\n", *p_value); //weird you can change the what its pointing but cannot change using derefrence
    printf("value: %ld its pointer: %p and %p\n", value, p_value, &value);
    //*p_value = 150;
    //compiler says cannot change the value of a constant 
    //printf("value: %ld its pointer: %p\n", value, p_value);
    
}


void void_pointers(void) {
    //you can cast any type into void ptr if you cast the value 
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *v_ptr;
    
    v_ptr = &i;
    printf("Value of i = %d\n", *(int *)v_ptr);
    
    v_ptr = &f;
    printf("Value of f = %f\n", *(float *)v_ptr);
    
    v_ptr = &ch;
    printf("Value of ch = %c\n", *(char *)v_ptr);
}


int main(void) {
    void_pointers();
    return 0;
}

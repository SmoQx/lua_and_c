#include <stdio.h>


int main(void) {
    int vals[10];
    int *const ptr_vals = vals;
    int counter = 0;
    printf("\n%p\n", &vals);
    printf("\n%p\n", ptr_vals);
    for (int i = 0; i <= 20; i ++) {
        if (counter == 10) {
            counter = -10;
        }
        *(ptr_vals + counter) = i;
        printf("%p\n", ptr_vals + counter);
        counter++;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vals[i]);
    }
    return 0;
}

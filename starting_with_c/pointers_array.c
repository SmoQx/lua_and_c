#include <stdio.h>


int main(void) {
    int vals[10];
    int *const ptr_vals = vals;
    int counter = 0;
    printf("\n%p\n", &vals);
    printf("\n%p\n", ptr_vals);
    for (int i = 0; i <= 20; i ++) {
        if (counter == 10) {
            counter = 0;
        }
        *(ptr_vals + counter) = i;
        printf("at address of vals=%p :: value=%d which is pointed by ptr=%p :: value=%d\t counter: %d\n", &vals, vals[counter], (ptr_vals + counter), *(ptr_vals + counter), counter);
        counter++;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vals[i]);
    }
    return 0;
}

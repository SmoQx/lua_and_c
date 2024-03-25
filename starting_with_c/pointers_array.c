#include <stdio.h>


int main(void) {
    int vals[10];
    int *ptr_vals = vals;
    int counter = 0;
    for (int i = 0; i <= 10000; i++) {
        if (i % 100 == 0) {
            printf("%d\t", *(ptr_vals));
        }
        if (counter == 11) {
            counter = 0;
        }
        *(ptr_vals + counter) = i;
    }
    return 0;
}

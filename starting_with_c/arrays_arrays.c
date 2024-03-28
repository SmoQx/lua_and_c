#include <stdio.h>


int main(void) {
    int vals[10];
    int counter = 0;
    for (int i = 0; i <= 10000; i++) {
        if (i % 100 == 0) {
            printf("%d\t", vals[0]);
        }
        if (counter == 10) {
            counter = 0;
        }
        vals[0 + counter] = i;
    }
    return 0;
}

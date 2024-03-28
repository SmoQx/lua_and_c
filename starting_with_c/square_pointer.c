#include <stdio.h>
#include <stdlib.h>


void squar(int *number) {
    *number = *number * *number;
}


int main(void) {
    int *n = (int *)malloc(sizeof(int));
    scanf("%d", n);
    squar(n);
    printf("%d\n", *n);

    int i;
    int *ptr_i = &i;
    scanf("%d", ptr_i);
    printf("%d\n", *ptr_i);
    squar(ptr_i);
    printf("%d\n", i);

    int j;
    scanf("%d", &j);
    printf("%d\n", j);
    squar(&j);
    printf("%d\n", j);

    return 0;
}

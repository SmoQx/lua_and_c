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

    /*int n;
    int *ptr_n = &n;
    scanf("%d", ptr_n);
    printf("%d\n", *ptr_n);
    squar(ptr_n);
    printf("%d\n", n);
    */
    /*
     or it can be like this 
     int n
     scanf("%d", &n);
     printf("%d\n", n);
     squar(&n);
     printf("%d\n", n);
     */

    return 0;
}

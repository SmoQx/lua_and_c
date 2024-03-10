#include <stdio.h>
int main(){
    int x = 0;
    float y = 0;
    char z = 'z';
    long xx = 0;
    double yy = 0;
    int xxx = 7;
    int result = xxx << 2;
    printf("result of : %d \n", result);
    printf("size of int is : %d \n", sizeof(x));
    printf("size of float is : %d \n", sizeof(y));
    printf("size of char is : %d \n", sizeof(z));
    printf("size of long is : %d \n", sizeof(xx));
    printf("size of double is : %d \n", sizeof(yy));
}

#include <stdio.h>


int add_two_and_divide(int a, int b, int c){
    int result;
    result = a * b + c;
    return result;
}


int main(){

    printf("%d\n", add_two_and_divide(5, 5, 2));
    int input;
    scanf("%d", &input);
    int added = input + 10;
    printf("%d", added);

    return 0;
}

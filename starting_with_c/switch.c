#include <stdio.h>


int main(){
    printf("provide the value ");
    int number;
    while (number != 7) {
        scanf("%d", &number);
        switch (number) {
            case 10:
                printf("the number is 10");
            case 11:

                printf("the number is 11");
                break;
            default:
                printf("%d", number);
                break;
        }
    }
    do {
        printf("the number is %d \n", number);
        scanf("%d", &number);
    }while (number != 9);
}

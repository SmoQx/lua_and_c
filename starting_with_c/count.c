#include <stdio.h>


int add_two(int a, int b){
    return a + b;
}


int main(){
    long int i;
    scanf("%ld", &i);
    printf("%li", i);
    for (; i > 0; i--) {
        add_two(1, 1);
        if (i == 1) {
        
            printf("%li", i);
        }
    }

}

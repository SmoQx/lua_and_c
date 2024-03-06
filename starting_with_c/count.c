#include <stdio.h>


int add_two(int a, int b){
    return a + b;
}


int main(){

    for (long int i; i<10000000001; i++) {
        add_two(1, 1);
        if (i == 10000000000) {
        
            printf("%li", i);
        }
    }

}

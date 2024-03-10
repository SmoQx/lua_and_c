#include <stdio.h>
#include <stdbool.h>


bool check_if_prime(int number, int number_to_compare){
    if (number % number == 0 && number % 2 != 0 && number % number_to_compare != 0) {
        return true;
    } else {
        return false;
    }
}


int main(){
    int prime_numbers[100] = {1, 2, 3};
    int i;
    int p;
    int prime_index = 3;
    for (i = 5; i < 50; i = i + 2) {
        for (p = 2; p < prime_index; p++) {
            if (check_if_prime(i, prime_numbers[p]) ) {
                prime_numbers[prime_index] = i;
                prime_index++;
            }
        }
    }

    for (i = 0; i < 30; i++) {
        printf("prime numbers %d \n", prime_numbers[i]);
    }
}

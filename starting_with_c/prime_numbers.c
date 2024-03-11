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
    int prime_numbers[100] = {1};
    prime_numbers[1] = 2;
    prime_numbers[2] = 3;
    int i = 5;
    int p;
    int prime_index = 3;
    while (prime_numbers[99]==1) {
        printf("%d ", i);
        if (i > 150){
            prime_numbers[99] = 10;
        }
        i = i + 2;
    }
//        for (p = 1; p < prime_index; p++) {
//            if (i % i == 0 && i % prime_numbers[p] != 0 && i / prime_numbers[p] >= prime_numbers[p]) {
//                prime_numbers[prime_index] = i;
//                prime_index++;
//            } else {
//                printf("the number is not prime%d \n", i);
//                break;
//            }
//        }

    for (i = 0; i < 10; i++) {
        printf("prime numbers %d \n", prime_numbers[i]);
    }
}

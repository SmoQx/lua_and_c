#include <stdio.h>
#include <stdarg.h>


int gcd(int first_number, int second_number) {
    int result;
    int lesser;
    if (first_number < second_number){
        lesser = first_number;
    } else {
        lesser = second_number;
    }
    for (int i = 1; i <= lesser; i++){
        if (first_number % i == 0 && second_number % i == 0) {
            result = i;
        }
    }
    return result;
}


float absolute_value(float number) {
    float result;
    if (number > 0) {
        result = number;
    } else {
        result = -number;
    }
    return result;
}


int square_root(int number) {
    int result;
    if (number < 0) {
        printf("The numbers was negative sqrts cant be negative");
        result = -1.0;
    } else {
        result = number / number;
    }
    return result;
}


int sum(int count, ...) {
    int total = 0;
    va_list args;
    
    // Initialize the va_list
    va_start(args, count);
    
    // Loop through the variable arguments and sum them up
    for (int i = 0; i < count; i++) {
        // Get the next argument from the va_list
        int num = va_arg(args, int);
        // Add it to the total
        total += num;
    }
    
    // Clean up the va_list
    va_end(args);
    
    return total;
}


int main() {
    int first = 3;
    int second = 6;
    int result = gcd(first, second);
    printf("greatest common divisor %d of %d and %d \n", result, first, second);
    float abs1 = -2;
    int abs2 = 3;
    printf("The abs value of %f is %f\n", abs1, absolute_value(abs1));
    printf("The abs value of %f is %f\n", (float)abs2, absolute_value(abs2));
    int num_to_sqrt = 4;
    int num_to_sqrt2 = -2;
    printf("The square root is %d \n", square_root(num_to_sqrt));
    printf("The square root is %d \n", square_root(num_to_sqrt2));
    printf("sum of two 2 is %d", sum(2, 2, 2));
    return 0;
}

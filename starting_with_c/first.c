#include <stdio.h>

int a(int number){
    if (number == 1){
        char a[] = "string";
        printf("hello World!%s \n", a);
        return 0;
    };
    return 1;
};

int to_binary(int provided_number){
    int holding_number = provided_number;
    char binary_number[provided_number / 2 + 1];
    int iterator = 0;
    while (holding_number >= 1) {
        binary_number[iterator] = (holding_number % 2);
//        printf("%i", binary_number[iterator]);
        holding_number = holding_number / 2;
        iterator++;
    }
    for (int i = 0; i < sizeof(binary_number); i++) {
        printf("%i", binary_number[i]);
    }
    printf("%s", binary_number);
    return 0;
}

int main(){
    int what_was_returned, hex_number, num_for_modulo;
    num_for_modulo = 9;
    what_was_returned = a(1);
    scanf("%i", &hex_number);
//    int size_of_an_array = sizeof(to_binary(hex_number));
//    int arr[size_of_an_array];
//    arr[] = to_binary(hex_number);
//    for (int i = 0; i >= sizeof(to_binary(hex_number)); i++) {
//        printf("%i", arr[i]);
//    } 
    to_binary(hex_number);
    printf("\n");
    printf("What was returned %i and the provided number in hexadecimal is : %x", what_was_returned, hex_number);
    return 0;
};

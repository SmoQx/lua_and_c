#include <stdio.h>
#include <string.h>


void print_list(int size, int lenght, char list[size][lenght]) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", list[i]);
    }
}


void sort_string_array(char sorted_string_array[][], char list_to_be_sorted[][]) {

}


int main() {
    int number_of_strings;
    int max_str_len = 50;
    char sorted_strings_array[number_of_strings][max_str_len];
    scanf("%d", &number_of_strings);
    char strin_lsit[number_of_strings][max_str_len];
    for (int i = 0; i < number_of_strings; i++) {
        scanf("%s", strin_lsit[i]);
    }

    print_list(number_of_strings, max_str_len, strin_lsit);

    return 0;
}

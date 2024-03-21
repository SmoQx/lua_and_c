#include <stdio.h>
#include <string.h>


void print_list(int size, int lenght, char list[size][lenght]) {
    for (int i = 0; i < size; i++) {
        printf("\n%s\n", list[i]);
    }
}


void sort_string_array(int number_of_strings, char list_to_be_sorted[number_of_strings][50]) {
    char temp[50]; 
    for (int i = 0; i < number_of_strings; i++) {
        for (int j = 0; j < number_of_strings - 1; j++) {
            if (strcmp(list_to_be_sorted[j], list_to_be_sorted[j+1]) > 0) {
                strcpy(temp, list_to_be_sorted[j]);
                strcpy(list_to_be_sorted[j], list_to_be_sorted[j+1]);
                strcpy(list_to_be_sorted[j+1], temp);
            }
        }
    }
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

    sort_string_array(number_of_strings, strin_lsit);
    print_list(number_of_strings, max_str_len, strin_lsit);

    return 0;
}

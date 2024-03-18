#include <stdio.h>
#include <string.h>


void print_list(int size, int lenght, char list[size][lenght]) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", list[i]);
    }
}


void sort_string_array(char sorted_string_array[3][50], char list_to_be_sorted[3][50]) {
    char temp[50]; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (strcmp(list_to_be_sorted[j], list_to_be_sorted[j+1]) > 0) {
                strcpy(temp, list_to_be_sorted[j]);
                strcpy(sorted_string_array[j], list_to_be_sorted[j+1]);
                strcpy(sorted_string_array[j+1], temp);
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

    sort_string_array(sorted_strings_array, strin_lsit);
    print_list(number_of_strings, max_str_len, sorted_strings_array);

    return 0;
}

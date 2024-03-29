#include <stdio.h>


int main(void) {
    struct date {
        int day;
        int *month;
        int year;
    } today;
    /* or
    struct date {
        int day;
        int *month;
        int year;
    };
    struct date today;
    or one time use (unnamed struct)
    struct {
        int day;
        int *month;
        int year;
    } today;
     * */
    struct month {
        int days;
        char name[3];
    };
    struct month jan = {31, {'j', 'a', 'n'}};
    printf("%s\n", jan.name);
    struct date *ptr_date = &today;
    int items[3] = {10, 10, 20};
    struct date tommorrow = {10, items, 2025};
    printf("%d\n", tommorrow.month[2]);
    today.day = 10;
    today.month = items;
    today.year = 2024;
    printf("%d\n", today.year);
    ptr_date->year = 20;
    ptr_date->month[2] = 40;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", today.month[i]);
    }
    printf("%d\n", ptr_date->year);
    printf("%d\n", today.year);
    return 0;
}

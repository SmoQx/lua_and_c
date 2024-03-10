#include <stdio.h>


#define MONTHS 12


int months(int month){
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    for (int index = 0 ; index < MONTHS; index++) {
        printf("%d \n", days[index]);
    }
    return days[month];
}


int main() {
    char tekst[] = "teskt";
    int k[5] = {10, 12, 13};
    int i = 2;
    printf("%zd\n", sizeof(k) / sizeof(k[0]));
    for (int x = 0; x < (sizeof(k) / sizeof(k[0])); x++) {
        printf("%d,", k[x]);
    }
    k[0] = 11;
    printf("\n %d \n", k[0]);
    k[3] = 40;
    printf("%2u \n", i);
    printf("%d\n", k[4]);
    printf("%s", tekst);
    printf("\n Printing days in second month %d \n", months(1));

}

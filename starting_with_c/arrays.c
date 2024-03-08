#include <stdio.h>


//int lenghtof(int array) {
//    return sizeof(array) / sizeof(array[0]);
//    
//}


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

}

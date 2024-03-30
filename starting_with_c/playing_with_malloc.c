#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    int* p_num = (int*)malloc(10 * sizeof(int));
    if (!p_num) {
        printf("Can't allocate memory");
        return -1;
    }
    p_num[0] = 100;
    p_num[1] = 2;
    p_num[2] = 5;
    p_num[3] = 2;
    printf("%d\t%p\n", *p_num, p_num);
    printf("%d, %d\n", sizeof(p_num), 10 * sizeof(int));
    for (int i = 0; i < (sizeof(p_num) / sizeof(*p_num)); i++) {
        printf("%d\t", p_num[i]);
    }
    free(p_num);
    p_num = NULL;

    int* p_nums = (int*)calloc(20, sizeof(int));
    if (!p_nums) {
        printf("Can't allocate memory");
        return -1;
    }
    *p_nums = 20;
    printf("%d\t%p\n", *p_nums, p_nums);
    printf("%d, %d\n", sizeof(p_nums), sizeof(int));
    for (int i = 0; i < (20 * sizeof(int) / sizeof(int)); i++) {
        printf("%d\t", p_nums[i]);
    }
    free(p_nums);
    p_nums = NULL;


    char *str = NULL;
    str = (char *)malloc(256);
    gets(str);
    
    printf("\n%s", str);

    free(str);
    str = NULL;


    return 0;
}

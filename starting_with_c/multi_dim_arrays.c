#include <signal.h>
#include <stdio.h>


int main(){
    int matrix[3][3] = {{1, 0, 1},
                        {0, 1, 0},
                        {1, 0, 1}};

    printf("%d", matrix[1][1]);
    printf("size of this matrix in bytes is %d\n size of one array is %d\n, size of one item in array is %d\n", sizeof(matrix), sizeof(matrix[1]), sizeof(matrix[1][1]));
    for (int x = 0; x < sizeof(matrix) / sizeof(matrix[1]); x++) {
        for (int y = 0; y < sizeof(matrix[1]) / sizeof(matrix[1][1]); y++){
            printf(" %d ", matrix[x][y]);
        }
        printf("\n");
    }
    return 0;
}

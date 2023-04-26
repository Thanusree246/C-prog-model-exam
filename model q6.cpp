#include <stdio.h>
#define ROWS 2
#define COLS 2

void multiply_matrices(int matrix1[][COLS], int matrix2[][COLS], int result[][COLS]);

int main() {
    int matrix1[ROWS][COLS] = {{1,2},
                               {5,3}};
    int matrix2[ROWS][COLS] = {{2,3},
                               {4,1}};
    int result[ROWS][COLS];

    multiply_matrices(matrix1, matrix2, result);

    printf("Resulting Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiply_matrices(int matrix1[][COLS], int matrix2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

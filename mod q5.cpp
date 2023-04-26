#include <stdio.h>

#define ROWS_A 3
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 4

int main() {
    int A[ROWS_A][COLS_A] = { {1, 2}, {3, 4}, {5, 6} };
    int B[ROWS_B][COLS_B] = { {7, 8, 9, 10}, {11, 12, 13, 14} };
    int C[ROWS_A][COLS_B] = {0};

    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            for (int k = 0; k < ROWS_B; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix A:\n");
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < ROWS_B; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix AxB:\n");
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

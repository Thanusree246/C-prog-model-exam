#include <stdio.h>

int main() {
    int rows, cols, i, j;
    float sum = 0, avg = 0;
    
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    avg = sum / (rows * cols);

    printf("\nSum of all elements in matrix = %.2f\n", sum);
    printf("Average of all elements in matrix = %.2f\n", avg);

    return 0;
}

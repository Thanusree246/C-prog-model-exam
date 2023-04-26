#include <stdio.h>

int main() {
   int m, n, i, j;
   printf("Enter number of rows and columns of matrix: ");
   scanf("%d %d", &m, &n);

   int matrix1[m][n], matrix2[m][n], sum[m][n];

 
   printf("\nEnter elements of matrix 1:\n");
   for(i=0; i<m; i++) {
      for(j=0; j<n; j++) {
         printf("Enter element a%d%d: ", i+1, j+1);
         scanf("%d", &matrix1[i][j]);
      }
   }

   
   printf("\nEnter elements of matrix 2:\n");
   for(i=0; i<m; i++) {
      for(j=0; j<n; j++) {
         printf("Enter element b%d%d: ", i+1, j+1);
         scanf("%d", &matrix2[i][j]);
      }
   }

  
   for(i=0; i<m; i++) {
      for(j=0; j<n; j++) {
         sum[i][j] = matrix1[i][j] + matrix2[i][j];
      }
   }

   
   printf("\nSum of matrices:\n");
   for(i=0; i<m; i++) {
      for(j=0; j<n; j++) {
         printf("%d ", sum[i][j]);
      }
      printf("\n");
   }

   return 0;
}

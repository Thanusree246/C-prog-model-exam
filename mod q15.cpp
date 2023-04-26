#include <stdio.h>
void addNumbers(int *a, int *b);
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    addNumbers(&num1, &num2);
    printf("The sum is %d\n", num1);
    return 0;
}
void addNumbers(int *a, int *b) {
    *a += *b;
}

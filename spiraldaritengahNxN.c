#include <stdio.h>

void printSpiral(int rows, int columns, int matrix[10][10]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void generateSpiral(int n) {
    int matrix[10][10];
    int value = n * n;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = bottom; i >= top; i--) {
            matrix[i][right] = value--;
        }
        right--;

        for (int i = right; i >= left; i--) {
            matrix[top][i] = value--;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][left] = value--;
        }
        left++;

        for (int i = left; i <= right; i++) {
            matrix[bottom][i] = value--;
        }
        bottom--;
    }

    printSpiral(n, n, matrix);
}

int main() {
    int n;
    
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    generateSpiral(n);

    return 0;
}

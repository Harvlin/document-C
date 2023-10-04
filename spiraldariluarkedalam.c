#include <stdio.h>

void printSpiral(int rows, int columns, int matrix[100][100]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void generateSpiral(int rows, int columns) {
    int matrix[100][100];
    int value = 1;
    int top = 0, bottom = rows - 1, left = 0, right = columns - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = value++;
            }
            left++;
        }
    }

    printSpiral(rows, columns, matrix);
}

int main() {
    int rows, columns;
    
    printf("ketik banyaknya baris: ");
    scanf("%d", &rows);

    printf("ketik banyaknya kolom: ");
    scanf("%d", &columns);

    generateSpiral(rows, columns);

    return 0;
    
}

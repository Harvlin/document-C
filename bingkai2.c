#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLUMNS 100

void printArray(int A[MAX_ROWS][MAX_COLUMNS], int rows, int columns) {
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++) {
            printf("%4d", A[x][y]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX_ROWS][MAX_COLUMNS];
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int bi = 1;

    for (int i = 0; i < columns; i++) {
        A[0][i] = bi;
        bi++;
    }

    for (int x = 1; x < rows; x++) {
        A[x][columns - 1] = bi;
        bi++;
    }

    for (int y = columns - 2; y >= 0; y--) {
        A[rows - 1][y] = bi;
        bi++;
    }

    for (int x = rows - 2; x > 0; x--) {
        A[x][0] = bi;
        bi++;
    }

    printArray(A, rows, columns);

    return 0;
}

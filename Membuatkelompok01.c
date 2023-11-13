#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shuffleArray(int *arr, int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main() {
    int N, i, j;
    // Input N
    printf("Masukkan nilai N (5 <= N <= 35): ");
    scanf("%d", &N);
    if (N < 5 || N > 35) {
        printf("N harus dalam rentang 5 hingga 35.\n");
        return 1;
    }
    int *matrix = (int *)malloc(N * sizeof(int));
    // Mengisi matriks dengan elemen 1 hingga N
    for (i = 0; i < N; i++) {
        matrix[i] = i + 1;
    }
    // Mengacak matriks
    srand(time(NULL));    
    shuffleArray(matrix, N);
    // Mencetak matriks dengan kelompok 3 elemen per baris
    printf("Matriks acak dengan kelompok 3 elemen per baris:\n");
    for (i = 0; i < N; i++) {
        printf("%2d ", matrix[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
    
    free(matrix);
    return 0;
}
#include <stdio.h>
// Fungsi untuk melakukan pertukaran nilai
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk mempartisi array dan mengembalikan indeks pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Pivot diambil dari elemen terakhir
    int i = (low - 1);  // Indeks elemen yang lebih kecil

    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++;  // Meningkatkan indeks elemen yang lebih kecil
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Fungsi rekursif untuk mengurutkan array menggunakan Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Menghitung indeks pivot yang membagi array menjadi dua bagian
        int pi = partition(arr, low, high);

        // Memanggil rekursif quickSort untuk dua bagian yang tersisa
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Fungsi utama
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array sebelum diurutkan: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);


    printf("Array setelah diurutkan: ");
    printArray(arr, n);

    return 0;
}
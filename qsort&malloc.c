#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b);
int compare(const void *a, const void *b) {
      return(*(int*) a - *(int*) b);
}
int main(void) {
      int n; /*Jumlah array*/ scanf("%d", &n);
      int *arr = (int *) malloc(n * sizeof(int));

      // mengisi array, gunakan & karena mengisi tertuju indeks
      for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
      }
      printf("\n\n");

      // print array
      for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
      }

      // fungsi qsort
      qsort(arr, n, sizeof(int), compare);

      // menampilkan setelah selesai
      printf("\n\n");
      for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
      }

      free(arr);
      return 0;
}
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b);
int compare(const void *a, const void *b) {
      return(*(int*) a - *(int*) b);
}
int main(void) {
      int n; scanf("%d", &n);
      int *arr = (int *) malloc(n * sizeof(int));

      for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
      }
      
      printf("\n\n");
      for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
      }

      qsort(arr, n, sizeof(int), compare);

      printf("\n\n");
      for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
      }

      free(arr);
      return 0;
}
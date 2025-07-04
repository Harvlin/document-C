#include <stdio.h>
int main(void) {
      int a[] = {4, 1, 3, 2, 5, 6, 9, 7, 10, 8};
      int size = sizeof(a) / sizeof(a[0]);
      for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1; j++) {
                  if (a[j] > a[j + 1]) {
                        int temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                  }
            }
      }
      
      for (int k = 0; k < sizeof(a)/sizeof(a[0]); k++)
      	printf("a[%d] = %d\n", k, a[k]);
}
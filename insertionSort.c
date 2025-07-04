#include <stdio.h>
void insertionSort(int arr[], int length) {
      for (int i = 1; i < length; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[J] > key) {
                  arr[j + 1] = arr[j];
                  j--;
            }
            arr[j + 1] = key;
      }
}
void tampilkan(int array[], short length)
{
      for (int i = 0; i < length; i++)
      {
            printf("%d\n", array[i]);
      }
}
int main()
{
      int array[] = {3, 1, 2, 5, 6, 4, 8, 7, 10, 9};
      short size = sizeof(array) / sizeof(array[0]);
      insertionSort(array, size);
      tampilkan(array, size);
}
/*
Qsort
Factorial
Malloc
Angka palindrom
Random
SelisihJam Struct
Membuat kelompok
Sudoku
Permutasi
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(void) 
{     
      int arr[101], i = 0;
      while (scanf("%d", &arr[i]) != EOF) {
            i++;
      }
      for (int n = i; i > 0; i--) {
            printf("%d\n", arr[i]);
      }
      return 0;
}
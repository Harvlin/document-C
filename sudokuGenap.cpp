#include<iostream>
#include<iomanip>

using namespace std;

void generate(int n) {
   if (n % 4 != 0) {
      cout << "Hanya mendukung ukuran kelipatan 4";
      return;
   }

   int sudoku[n][n];

   int num = 1;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         sudoku[i][j] = num++;
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if ((i % 4 == j % 4) || ((i % 4 + j % 4) == 3)) {
            sudoku[i][j] = (n * n + 1) - sudoku[i][j];
         }
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         cout << setw(4) << sudoku[i][j] << " ";
      }
      cout << endl;
   }
}

int main() {
   generate(8);
   return 0;
}
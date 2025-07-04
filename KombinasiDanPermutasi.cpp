#include<iostream>
using namespace std;

int factorial(int n) {
   if (n <= 1) return 1;
   return n * factorial(n - 1);
}

int kombinasi(int n, int r) {
   return factorial(n) / (factorial(r) * factorial(n - r));
}

int permutasi(int n, int r) {
   return factorial(n) / factorial(n - r);
}

int main() {
   int n, r;
   cout << "Masukkan nilai n: ";
   cin >> n;
   cout << "Masukkan nilai r: ";
   cin >> r;

   cout << "Kombinasi C(" << n << ", " << r << ") = " << kombinasi(n, r) << endl;
   cout << "Permutasi P(" << n << ", " << r << ") = " << permutasi(n, r) << endl;

   return 0;
}
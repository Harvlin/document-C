#include <iostream>
using namespace std;

int lastDigit(int angka, int pangkat) {
   if (pangkat == 0) return 1;
   if (pangkat == 1) return 1;
   if (angka % 10 == 0) return 0;
   int lastDigit = angka % 10;
   int patern[4];
   patern[0] = lastDigit;
   for (int i = 1; i < 4; i++) {
      patern[i] = (patern[i - 1] * lastDigit) % 10;
   }
   int index = (pangkat - 1) % 4;
   return patern[index];


}

int main() {
   int angka, pangkat; cin >> angka >> pangkat;
   
   if (pangkat < 0) return 1;

   cout << lastDigit(angka, pangkat);
   return 0;
}
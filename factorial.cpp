#include<iostream>
using namespace std;
int fac(int n) {
      int hasil = n - n + 1;
      while (n > 0) {
            hasil *= n;
            n--;
      }
      return hasil;
}
int main(void) {
      cout << fac(4);
}
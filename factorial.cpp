#include <iostream>
using namespace std;

int fac(int n) {
      int hasil = 1;
      while (n > 0) {
            hasil *= n;
            n--;
      }
      return hasil;
}

int main()  {
      cout << fac(5);
}
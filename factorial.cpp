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
     int a, b, C, P;
     cout << "masukkan nilai a dan b";
     cin >> a >> b;
      C = fac(a) / (fac(b) * fac(a - b));
      P = fac(a) / fac(a - b);
      cout << "C(" << a << "," << b << ") = " << C << endl;
      cout << "P(" << a << "," << b << ") = " << P << endl;
      return 0;
      
}
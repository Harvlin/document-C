#include<iostream>
using namespace std;

int extEuclid(int a, int b, int &x, int &y) {
      if (a == 0) {
            x = 0;
            y = 1;
            return b;
      }

      int x1, y1;
      int ans = extEuclid(b % a, a, x1, y1);

      x = y1 - (a / b) * x1;
      y = x1;

      return ans;
}

int main(void) {
      int a, b, x, y;
      cin >> a >> b;

      int ans = extEuclid(a, b, x, y);
      
      cout << "FPB: " << ans << endl;
      cout << "x: " << x << endl << "y: " << y;

      return 0;
}
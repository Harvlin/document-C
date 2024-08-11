#include<iostream>
using namespace std;

int power(int x, int n) {
      if (n == 0)
            return 1;
      int res = power(x, n / 2);
      if (n & 1)
            return x * res * res;
      return res * res;
}

int main(void) {
      int x, n;
      
      cin >> x;
      cin >> n;

      cout << power(x, n);
      return 0;
}
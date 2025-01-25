#include<iostream>
using namespace std;

void f (int n) {
      if (n > 1) f(n - 1);
      cout << " " << n * 2 - 1;
}

int main() {
      f (10);
      return 0;
}
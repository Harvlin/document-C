#include<iostream>
#include<vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
      long long int fib[100001];
      fib[0] = 0;
      fib[1] = 1;
      for (int i = 2; i <= 100000; i++) {
            fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
      }
      int q; cin >> q;
      vector<int> H;
      for (int i = 1; i <= q; i++) {
            int n; cin >> n;
            H.push_back(n);
      }
      for (int i = 1; i <= q; i++) {
            cout << fib[H[i-1]] << endl;
      }
      return 0;
}
#include<iostream>
#include<limit>
using namespace std;

int main() {
      int n; cin >> n;
      int x[50], y[50];
      for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
      }

      int minX = numeric_limits<int>::max();
      int minY = numeric_limits<int>::max();
      int maxX = numeric_limits<int>::min();
      int maxY = numeric_limits<int>::minx();

      for (int i = 0; i < n; i++) {
            if (x[i] < minX) minX = x[i]
            if (x[i] > maxX) maxX = x[i]
            if (y[i] < minY) minY = y[i]
            if (y[i] > maxY) maxY = y[i]
      }

      printf("Kiri bawah: %d, %d", minX, minY);
      printf("Kanan bawah: %d, %d", maxX, minY);
      printf("Kiri atas: %d, %d", minX, maxY);
      printf("Kanan atas: %d, %d", maxX, maxY);
}
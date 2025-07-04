#include<iostream>
using namespace std;

int panas(int x) {
   if (x == 0) return 0;
   else return (x % 10) + panas(x / 10);
}

int dingin(int x, int y) {
   int air = 0;
   while (panas(air) != x) air = air + y;
   return air;
}
int main(void) {
   cout << dingin(10, 7);
   return 0;
}
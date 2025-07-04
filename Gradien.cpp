#include<iostream>
#include<cmath>
using namespace std;

struct Point {
   double x, y;
};

void findCircle(Point A, Point B, Point C, Point &center, double &radius) {
   double x1 = A.x, y1 = A.y;
   double x2 = B.x, y2 = B.y;
   double x3 = C.x, y3 = C.y;

   double ma = (y2 - y1)/(x2 - x1);
   double mb = (y3 - y2)/(x3 - x2);

   if (x2 == x1 || x3 == x2) {
      cout << "Tidak boleh ada 2 titik dengan x yang sama";
      return;
   }

   center.x = (ma * mb * (y1 - y3) + mb * (x1 + x2) - ma * (x2 + x3)) / (2 * (mb - ma));
   center.y = -1 / ma * (center.x - (x1 + x2) / 2) + (y1 + y2) / 2;

   radius = sqrt(pow(center.x - x1, 2) + pow(center.y - y1, 2));
}

int main() {
   Point A, B, C, center;
   double radius;

   cin >> A.x >> A.y;
   cin >> B.x >> B.y;
   cin >> C.x >> C.y;

   findCircle(A, B, C, center, radius);

   cout << "Koordinat pusat: " << center.x << ", " << center.y << endl;
   cout << "Radius: " << radius;

   return 0;
}
#include<stdio.h>

int apaini(int a, int b);
int apaini(int a, int b) {
	int x, y, r;
	x = a; // 10
	y = b; // 20

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}
int main () {
	printf("%d", apaini(10, 20));
	return 0;
}
#include<stdio.h>
int f (int x);
int n = 0;
int f (int x)  {
	if (x == 0)
		return 0;
	else {
		n++;
		return 1 - f(x - 1);
	}
}
int main() {
	f(2017);
	printf("%d", n);
	return 0;
}

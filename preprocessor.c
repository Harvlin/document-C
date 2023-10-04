#include<stdio.h>
#include "aturan.h"
int main()
{
	double n, b;
	n = 5; b = 3;
	printf("%lf\n", P3(n));
	n = kuad(n + b);
	printf("%lf\n", n);
	b = 100;
	printf("%f", ctof(b));
 	return 0;
}

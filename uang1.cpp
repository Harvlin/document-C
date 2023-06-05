#include<stdio.h>
int main()
{
	int uang;
	int a, b, c, d, e, f, g;
	printf("input uang: ");
	scanf("%d", &uang);
	a = uang / 100000;
	uang = uang%100000;
	b = uang / 50000;
	uang = uang%50000;
	c = uang / 20000;
	uang = uang%20000;
	d = uang / 10000;
	uang = uang%10000;
	e = uang / 5000;
	uang = uang%5000;
	f = uang / 2000;
	uang = uang%2000;
	g = uang / 1000;
	uang = uang%1000;
	
	printf("Uang 100rb = %d lembar \n", a);
	printf("Uang 50rb = %d lembar \n", b);
	printf("Uang 20rb = %d lembar \n", c);
	printf("Uang 10rb = %d lembar \n", d);
	printf("Uang 5rb = %d lembar \n", e);
	printf("Uang 2rb = %d lembar \n", f);
	printf("Uang 1rb = %d lembar \n", g);
	
 	return 0;
}

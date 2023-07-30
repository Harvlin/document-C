#include<stdio.h>
void tukar(int *, int *);
int main()
{
	int a,b;
	a = 25;
	b = 20;
	tukar(&a, &b);
	printf("%d %d\n", a, b);

 	return 0;
}
void tukar(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

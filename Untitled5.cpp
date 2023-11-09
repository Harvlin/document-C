#include<stdio.h>
int main()
{
	int a;
	int *b = &a;
	*b = 20;
	printf("%d", a);
 	return 0;
}

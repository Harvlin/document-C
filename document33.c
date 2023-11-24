#include<stdio.h>

void f(int);	
int a[100];
int main()
{
	f(8);
 	return 0;
}
void f(int n){
	if (n>1)
	{
		f(n-1);
	}
		printf(" %d", n*2-1);
}

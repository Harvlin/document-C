#include<stdio.h>
int main()
{
	int x, b;
	b = 10;
	for(x=1; x<=10; x++)
	{
		printf("%d%d ", x*2-1, b);
		b+=5;
	}

 	return 0;
}

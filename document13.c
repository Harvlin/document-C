#include<stdio.h>
int main()
{
	int x, y;
	for(y=1; y<=20; y++)
	{
		//printf("%d ", y);
			for(x=1; x<=20; x++)
		{
				printf("%3d", x*2-1);
		}
		printf("\n");
	}
 	return 0;
}

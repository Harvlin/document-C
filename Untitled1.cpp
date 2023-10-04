#include<stdio.h>
int main()
{
	static int a[5][5];
	
	a[1][2] = 1;
	
	for (int i = 0; i <=4; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
 	return 0;
}

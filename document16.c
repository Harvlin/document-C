#include<stdio.h>
int main()
{
	int x, y;
	for(y=1; y<=16; y++)
	{
		for(x=1; x<=7-y; x++)
			printf("%c", '*');
	printf("\n");
	}
 	return 0;
}

#include<stdio.h>
int main()
{
	int n = 65;
	/*
	for (int i = 0; ; i++)
	{
		int p = n / 2;
		int s = n % 2;
		n = p;
		if (p == 1) break;
	}
	*/
	do 
	{
		n = n / 2;
		int s = n % 2;
		printf("%d", s);
	} while (n >= 1);
	
 	return 0;
}

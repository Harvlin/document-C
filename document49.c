#include<stdio.h>
void fungsi(int n)
{
	if (n > 1) 
		fungsi(n - 1);
	for (int j = 1; j <= 40 - n; j++)
		printf(" ");
	
	for(int i = 1; i <= (n * 2 - 1); i++)
		printf("*");
	printf("\n");
}
int main()
{
	fungsi(30);
	return 0;
}
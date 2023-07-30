#include<stdio.h>
void tampilkan(char n[]);

void tampilkan(char n[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%c ", n[i]);
	}
	printf("\n");
}
int main()
{
	char a[5] = {"KAMU"};
	tampilkan(a);
 	return 0;
}

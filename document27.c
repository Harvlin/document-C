#include<stdio.h>
void isidata(int a[]);
void tukar(int *, int *);
void tampilkan(int n[]);

void isidata(int a[])
{
	int x;
	for ( x = 0; x <= 5; x++)
	{
		scanf("%d", &a[x]);
	}
}
int main()
{
	int b[10];
	isidata(b);
	tampilkan(b);
 	return 0;
}
void tampilkan(int n[])
{
	int i;
	for (i = 0; i <= 5; i++)
	{
		printf("%d ", n[i]);
	}
	printf("\n");
}
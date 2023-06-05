#include<stdio.h>
void jumlah(int*, int*, int*);
int main()
{
	int x = 10, y = 20, z;
	jumlah(&x, &y, &z);
	printf("x = %d, y = %d, z = %d\n", x,y,z);
 	return 0;
}
void jumlah(int *a, int *b, int *c)
{
	*c = *a + *b;
}

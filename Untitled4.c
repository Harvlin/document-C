#include<stdio.h>
int main()
{
	int a;
	int *c;
	c = &a;
	*c = 100;
	printf("a = %d\n", a);
	printf("Alamat a: %p\n", &a);
	printf("Alamat c: %p\n", &c);
	printf("Isi variable c = %p\n", c);
	printf("Nilai yang ditunjuk c: %d\n", *c);
 	return 0;
}

#include<stdio.h>
int main()
{
	int a[10] = {8, 7, 3, 2, 6, 9, 12, 10, 5, 4};
	int i;
	printf("Alamat dari a: %p\n", a);
	printf("Alamat dari a[0]: %p\n", &a[0]);
	printf("Isi a[0] = %d\n", *(a+1));
	for(i = 0; i <= 9; i++)
		printf("%d ", *(a+i));
 	return 0;
}

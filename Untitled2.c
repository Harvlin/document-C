#include<stdio.h>
int main()
{
	int mat[] = {1, 2, 3, 4};
	printf("Alamat mat: %p\n", &mat[0]);
	printf("Alamat mat: %p", &mat[1]);
 	return 0;
}

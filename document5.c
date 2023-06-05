#include<stdio.h>
int main()
{
	int nilai;
	scanf("%d", &nilai);
	if (nilai < 6)
		printf("Buruk");
	else if (nilai < 8)
		printf("Cukup");
		else if (nilai < 10)
			printf("Baik");
		else
			printf("Sangat baik");
 	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int n;
	for (int i = 1; i < 10; i++) {
		n = rand();	
		printf("n = %d\n", n);
	}
 	return 0;
}

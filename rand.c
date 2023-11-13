#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int n;
	for (int i = 1; i < 20; i++) {
		n = rand() % 6 + 15;	
		printf("n = %d\n", n);
	}
 	return 0;
}

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime (int num)
{
	if (num <= 1)
		return false;
	for (int i = 3; i < sqrt(num) + 1; i++) {
		if (num %i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int n = 0;
	int b;
	printf("Bilangan prima ke: "); scanf("%d", &b);
	for (int x = 1; ; x++)
	{
		if (isPrime(x)) 
		{
			n++;
			printf("%d\n", x);
			if (n == b)
			{
				printf("Bilangan prima ke %d adalah %d", b, x);
				break;
			}
		}
	}

 	return 0;
}

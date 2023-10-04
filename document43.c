#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	unsigned int b1, b2;
	scanf("%d %d", &b1, &b2);
	for (unsigned int i = 1; i <= b1; i++) 
	{
		if (i < b1)
			if (i % b2 == 0)
				printf("* ");
			else
				printf("%d ", i);
		else
			printf("%d\n", i);
		
	}
 	return 0;
}

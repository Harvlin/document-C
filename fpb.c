#include<stdio.h>
int fpb(int a, int b);
int fpb(int a, int b)
{
	if (a == 0) {
		return b;
	} else if (a < b) {
		return fpb(b, a);
	} else {
		return fpb(a % b, b);
	}
	
}
int main()
{
	printf("%d", fpb(228, 6));
 	return 0;
}
//213
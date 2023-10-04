#include<stdio.h>
int box(int);
int box(int input)
{
	int bx = 1024;
	if (((double)input / bx) - (input / bx) > 0)
		return input / bx + 1;
	else 
		return input / bx;
}
int main()
{
	int input;scanf("%d", &input);
	printf("%d", box(input));
 	return 0;
}
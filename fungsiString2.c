#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() 
{
	char *bil1 = "23.45ee", *p;
	double bint = 0;
	//gets(bil1);
	
	bint = strtod(bil1, &p);
	printf("%lf\n", bint);
	printf("%s", p);	
	return 0;	
}
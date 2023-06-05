#include<stdio.h>
#include<string.h>
int main()
{
	char nama1[25], nama2[25];
	gets(nama1);
	printf("Namamu %s\n", nama1);
	strcpy(nama2, nama1);
	printf("%s\n", nama2);
 	return 0;
}

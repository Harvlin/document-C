#include<stdio.h>
int main()
{
	char nama1[10], nama3[10];
	char nama2[15]={"Desember"};
	nama1[0] = 'M';
	nama1[1] = 'e';
	nama1[2] = 'i';
	nama1[3] = '\0';
	printf("%s %s", nama1, nama2);
 	return 0;
}

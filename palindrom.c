#include<stdio.h>
#include<string.h>
void tampilkan(char n[]);

void tampilkan(char n[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%c ", n[i]);
	}
	printf("\n");
}
int main()
{
	char A[6] = {"APA"};
	int i;
	for(i = 0; i<strlen(A); i++){
		printf("%2c", A[i]);
	}
	printf("\n");
	char B[6];
	for(i = 0; i<strlen(A); i++)
	{
		B[i] = A[strlen(A)-i-1];
	}
	B[i] = '\0';
	tampilkan(B);
	if(strcmp(A, B) == 0)
		printf("Palindrom");
	else
		printf("Bukan palindrom");
 	return 0;
}

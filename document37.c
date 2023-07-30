#include<stdio.h>
#include<string.h>
void reverse(char s[]);
void reverse(char s[])
{
	int j, c, i;
	for(i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
int main()
{
	char b[] = {"GUNADARMA"};
	reverse(b);
	printf("B=%s\n", b);
	return 0;
}

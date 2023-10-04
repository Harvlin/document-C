#include<stdio.h>
#include<string.h>
void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}
void permute(char *str, int left, int right)
{
	if (left == right)
		printf("%s\n", str);
	else
	{
		for (int i = left; i <= right; i++)
		{
			swap((str + left), (str + i));
			permute(str, left + 1, right);
			swap((str + left), (str + i)); //backtrack
		}
	}
}
int main()
{
	char input[100]; scanf("%s", input);
	int length = strlen(input);
	printf("Permutasi dari %s adalah", input);
	permute(input, 0, length - 1);
	return 0;
}
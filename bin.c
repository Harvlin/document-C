#include<stdio.h>
#include<string.h>
int main()
{
	int decimal = 4;
	char binary[32];
	int i = 0;
	while (decimal > 0) {
		binary[i] = (decimal % 2) + 48;
		decimal = decimal / 2;
		i++;
	}
	binary[i] = '\0';
	int a, j, l;
	l = strlen(binary);
	for (a = 0, j = l; a <= l/2; a++, j--) {
		char temp = binary[j];
		binary[j] = binary[a];
		binary[a] = temp;
	}
	printf("%s\n", binary);
 	return 0;
}

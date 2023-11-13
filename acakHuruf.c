#include<stdio.h>
#include<string.h>
int main()
{
	char kata[11] = {"JAMBI KoTa"};
	for (int i = 0; i < strlen(kata); i++) {
		if (kata[i] > 64 && kata[i] < 92 && kata[i] != 32) {
			kata[i] = kata[i] + 32;
		}
	}
	printf("%s", kata);
 	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *file;
	char *buffer;
	long filelength;
	
	file = fopen("text2.txt", "r");
	
	if (file == NULL) {
		fprintf(stderr, "Gagal \n");
		return 1;
	}
	
	fseek(file, 0, SEEK_END);
	filelength = ftell(file);
	//fseek(file, 0, SEEK_SET);
	rewind(file);
	
	buffer = (char *)malloc(filelength + 1);
	
	if (buffer == NULL) {
		fprintf(stderr, "Gagal\n");
		return 1;
	}
	
	fread(buffer, filelength, 1, file);
	buffer[filelength] = '\0';
	fclose(file);
	int counter = 0;
	while(counter < filelength) {
		if (buffer[counter] >= 65 && buffer[counter] <= 92) {
			buffer[counter] = tolower(buffer[counter]);
			//printf("%c ", tolower(buffer[counter]));
		}
		counter++;
	}
	printf("Isi file:\n%s", buffer);
	
	free(buffer);
	
	printf("\n%d", filelength);
	return 0;
}

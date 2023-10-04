#include<stdio.h>
#include<string.h>
char *B;
char* konversi(char H)
{	
	switch(H) 
	{
		case '0' : strcpy(B, "0000");
		break;
		case '1' : strcpy(B, "0001");
		break;
		case '2' : strcpy(B, "0010");
		break;
		case '3' : strcpy(B, "0011");
		break;
		case '4' : strcpy(B, "0100");
		break;
		case '5' : strcpy(B, "0101");
		break;
		case '6' : strcpy(B, "0110");
		break;
		case '7' : strcpy(B, "0111");
		break;
		case '8' : strcpy(B, "1000");
		break;
		case '9' : strcpy(B, "1001");
		break;
		case 'A' : strcpy(B, "1010");
		break;
		case 'B' : strcpy(B, "1011");
		break;
		case 'C' : strcpy(B, "1100");
		break;
		case 'D' : strcpy(B, "1101");
		break;
		case 'E' : strcpy(B, "1110");
		break;
		case 'F' : strcpy(B, "1111");
		break;
	}
	return B;
}
int main()
{
	char Hexa;
	Hexa = getchar();
	printf("%s\n", konversi(Hexa));
 	return 0;
}

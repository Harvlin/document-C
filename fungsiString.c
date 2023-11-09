#include<stdio.h>
#include<ctype.h>
int main()
{
	printf("%s\n%s%s\n%s%s\n\n", "Menurut isdigit: ",
			isdigit('8') ? "8 adalah " : "8 bukan ", "digit",
			isdigit('#') ? "# adalah " : "# bukan ", "digit");
	
	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "Menurut isalpha: ",
			isalpha('A') ? "A adalah " : "A bukan ", "alphabet",
			isalpha('b') ? "b adalah " : "b bukan ", "alphabet",
			isalpha('&') ? "& adalah " : "& bukan ", "alphabet",
			isalpha('4') ? "4 adalah " : "4 bukan ", "alphabet");
	
	printf("%s\n%s%s\n%s%s\n%s%s\n\n", "Menurut isalnum: ",
			isalnum('A') ? "A adalah " : "A bukan ", "digit atau huruf",
			isalnum('8') ? "8 adalah " : "8 bukan ", "digit atau huruf",
			isalnum('#') ? "# adalah " : "# bukan ", "digit atau huruf");
	
	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "Menurut isxdigit: ",
			isxdigit('F') ? "F adalah " : "F bukan ", "digit hexadecimal",
			isxdigit('[') ? "[ adalah " : "[ bukan ", "digit hexadecimal",
			isxdigit('7') ? "7 adalah " : "7 bukan ", "digit hexadecimal",
			isxdigit('$') ? "$ adalah " : "$ bukan ", "digit hexadecimal",
			isxdigit('f') ? "f adalah " : "f bukan ", "digit hexadecimal");
	
	printf("%s\n%s%s\n%s%s\n%s%s\n\n", "Menurut islower: ", //isupper, isspace
			islower('p') ? "p adalah " : "p bukan ", " huruf kecil",
			islower('P') ? "P adalah " : "P bukan ", " huruf kecil",
			islower('!') ? "! adalah " : "! bukan ", " huruf kecil");
	
	printf("\n%c", toupper('u'));//tolower
	printf("\n%s", iscntrl('\t') ? "control char" : "bukan");
	printf("\n%s", ispunct('#') ? "Benar" : "Salah");
 	return 0;
}

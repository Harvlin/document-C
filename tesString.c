#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char kalimat[] = "asfafasfqwfag2134234124@$!@$#%@ASDW";
	int hurufbesar = 0;
	int hurufkecil = 0;
	int bilangan = 0;
	int tidakduaduanya = 0;
	for (int i = 1; i <= strlen(kalimat); i++) {
		if (isdigit(kalimat[i])) {
			bilangan++;
		} else if (isupper(kalimat[i])) {
			hurufbesar++;
		} else if (islower(kalimat[i])) {
			hurufkecil++;
		} else {
			tidakduaduanya++;
		}
	} 
	printf("huruf besar = %d\nhuruf kecil = %d\nbilangan = %d\ntidak dua duanya = %d\n", hurufbesar, hurufkecil, bilangan, tidakduaduanya);
 	return 0;
}

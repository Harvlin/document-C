#include<stdio.h>
#include<stdlib.h>
int main()
{
    int jam, menit;
    double sdjam, sdmenit;
    scanf("%d:%d", &jam, & menit);
    
    sdjam = menit * 0.5 + jam * 30.0;
    sdmenit = menit * 6.0;
    
    printf("Sudut terkecil yang terbentuk: ");
    if (abs(sdjam - sdmenit) < 180) {
    	printf("%0.2lf derajat\n", sdjam - sdmenit);
	} else {
		printf("%0.2lf derajat\n", 360.0 - (sdjam - sdmenit));
	}
 	return 0;
}

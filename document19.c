#include<stdio.h>
#include<math.h>
int main()
{
	int a[2], b[2], c[2];
	scanf("%d %d", &a[0], &a[1]);
	scanf("%d %d", &b[0], &b[1]);
	scanf("%d %d", &c[0], &c[1]);
	
	int AB, AC, CB;
	AB = sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2));
	AC = sqrt(pow(a[0] - c[0], 2) + pow(a[1] - c[1], 2));
	CB = sqrt(pow(b[0] - c[0], 2) + pow(b[1] - c[1], 2));
	
	if (AB < AC + CB && AC < AB + CB && CB < AC + AB)
		printf("Bisa segitiga");
	else
		printf("Tidak bisa segitiga");
 	return 0;
}

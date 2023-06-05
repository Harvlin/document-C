#include<stdio.h>
#include<math.h>
int main()
{
	int xa, ya, xb, yb, xc, yc;
	scanf("%d %d", &xa, &ya);
	scanf("%d %d", &xb, &yb);
	scanf("%d %d", &xc, &yc);
	
	int AB, AC, CB;
	AB = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
	AC = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2));
	CB = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
	
	if (AB < AC + CB && AC < AB + CB && CB < AC + AB)
		printf("Bisa segitiga");
	else
		printf("Tidak bisa segitiga");
 	return 0;
}

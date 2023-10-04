#include<stdio.h>
int main()
{
	int A[100][100];
	int p;
	int l;
	scanf("%d %d", &p, &l);
	int brs, klm, bi = 1;
	
	for (int i = 0; i < l; i++) {
		A[brs][i] = bi;
		bi++;
	}
	
	for (brs = 1; brs < p; brs++) {
		A[brs][l - 1] = bi;
		bi++;
	}
	
	for (klm = l - 2; klm >= 0; klm--) {
		A[p - 1][klm] = bi;
		bi++;
	}
	
	for (brs = p - 2; brs > 0; brs--) {
		A[brs][0] = bi;
		bi++;
	}
	
	for (int x = 0; x < p; x++) {
		for (int y = 0; y < l; y++) {
			printf("%4d", A[x][y]);
		}
		printf("\n");
	}
 	return 0;
}

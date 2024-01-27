#include<stdio.h>
int main()
{
	int A[] = {3, 5, 4, 7, 5, 2, 8, 3, 6, 10, 5, 12, 11, 7};
	int T[10];
	
	printf("Angka: ");
	int m; scanf("%d", &m);
	
	int qn = sizeof(A)/sizeof(A[0]);
	int i, j;
	int n = 0, no = 0;
	
	for (i = 0, j = qn - 1; i < (qn/2); i++, j--) {
		if (m == A[i]) {
			T[n++] = i;
			no++;
		}
		if (m == A[j]) {
			T[n++] = j;
			no++;
		}
	}
	
	if (no == 0) {
		printf("Tidak ada");
	} else {
		for (int z = 0; z < n; z++) {
			printf("Index: %d\n", T[z]);
		}
	}
 	return 0;
}

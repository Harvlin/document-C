#include<stdio.h>
#include<math.h>
int main()
{
	struct titik{int x, y;}A, B, C;
	
	printf("Ketik koordinat titik ke 1 2 dan 3\n");
	printf("A: ");scanf(" %d %d", &A.x, &A.y);
	printf("B: ");scanf(" %d %d", &B.x, &B.y);
	printf("C: ");scanf(" %d %d", &C.x, &C.y);
	
	int ab, bc, ca;
	ab = sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
	bc = sqrt(pow((B.x - C.x), 2) + pow((B.x - C.y), 2));
	ca = sqrt(pow((C.x - A.x), 2) + pow((C.y - A.y), 2));
	
	if (ab < (bc + ca) && bc < (ab + ca) && ca < (bc + ab)) {
		printf("Bisa segitiga");
	} else {
		printf("Tidak bisa");
	}
 	return 0;
}

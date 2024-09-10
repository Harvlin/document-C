#include<stdio.h>
int pemangkatan(int n, int pangkat)
{
	if (pangkat == 0) {
		return 1;
		
	} else if (pangkat > 0) {
		int h = 1;		
		
		for (int i = 1; i <= pangkat; i++) {
			h *= n;
		}
		return h;
		
	} else if (pangkat < 0) {
		int h = 1;		
		
		for (int i = 1; i <= pangkat; i++) {
			h *= n;
		}
		return 1/h;
	}
}
int main()
{
	int n = 3, pangkat = 2;
	printf("%d", pemangkatan(n, pangkat));
 	return 0;
}

#include<stdio.h>
int main() 
{
	int n, i, num;
	scanf("%d", &n);
	int *array = (int  *)malloc(n * sizeof(int));
	for (i = 0; i  < n; i++) {
		scanf("%d", &num);
		array[i]= num;
	}
	int mode = 0;
	int maxFrequency = 0;
	for (int i = 0; i < n; i++) {
		int currentElement = array[i];
		int currentFrequency = 0;
		
		for (int j = 0; j < n; j++)  {
			if (array[j] == currentElement)  {
				currentFrequency++;
			}
		}
		
		if (currentFrequency > maxFrequency)  {
			maxFrequency  =  currentFrequency;
			mode = currentElement;
		}
	}
	
	printf("%d", mode);
}
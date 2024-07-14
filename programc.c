#include<stdio.h>
#include<stdlib.h>
void print(int *t);
void bacaArray(int *t);
void offSetArray(int *t);

void swap(int *a, int *b);
void foo(int *a, int *b);

int main() {
	int *T = (int *)malloc(10 * sizeof(int));
	int *a, *b;
	
	scanf("%d", &(*a));
	scanf("%d", &(*a));
	
	swap(a, b);
	
	print(T);
	bacaArray(T);
	offSetArray(T);
	
	return 0;
}

void print(int *t) {
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d", *(t+i));
	}
}

void bacaArray(int *t) {
	int i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &t[i]);
	}
}

void offSetArray(int *t) {
	int i;
	for (i = 0; i < 10; i++) {
		t[i] = t[i] + 2;
	}
}

void swap(int *a, int *b) {
	int *temp;
	temp = a;
	a = b;
	b = temp;
}

void foo(int *a, int *b) {
	*a = 5;
	*b = 7;
}
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main() {
	int A[4][4] = {
		{1, 2, 3, 4}, 
		{5, 6, 7, 8}, 
		{9, 10, 11, 12}
	};
	for (int i = 0; i < 12; i++) {
		cout << *A[0] + i << " ";
	}
	/*
	int M[] = {5, 4, 3};
	printf("%d  %d  %d", M[0]+0, M[0]+1, M[0]+2);
	*/
	return 0;
}
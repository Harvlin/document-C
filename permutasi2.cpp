#include<iostream>
#include<algorithm>
using namespace std;

void dopermutasi(char A[], int N)
{
	do {
		for (int i = 0; i < N; i++)
			cout << A[i];
		cout << endl;
	} while (next_permutation(A, A + N));
}
int main() {
	int n;
	cout << "N: "; cin >> n;
	char A[n];
	for (int i = 0; i < n; i++) 
		cin >> A[i];
	dopermutasi(A, n);
	return 0;
}
#include<iostream>
using namespace std;
const int MAX = 10;
typedef char Tpermutasi[MAX];

void dopermutasi(Tpermutasi A, int mulai, int N)
{
	if (mulai == N) {
		for (int i = 0; i < N; i++)
			cout << A[i];
		cout << endl;
	} else {
		for (int i = mulai; i < N; i++) {
			char temp = A[i];
			A[i] = A[mulai];
			A[mulai] = temp;
			dopermutasi(A, mulai + 1, N);
			// Kembalikan array ke keadaan semulai untuk iterasi selanjutnya
			temp = A[i];
			A[i] = A[mulai];
			A[mulai] = temp;
		}
	}
}
int main() 
{
	int N;
	Tpermutasi A;
	cout << "N: "; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	dopermutasi(A, 0, N);
	return 0;
}
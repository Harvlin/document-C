#include<iostream>
using namespace std;
const int max = 100;
bool validMove[6][6] = {{false, false, true, true, true, false},
						{false, false, false, true, true, true},
						{true, false, false, false, true, false},
						{true, true, false, false, false, true},
						{true, true, true, false, false, false},
						{false, true, false, true, false, false}};
int A, B, C, Ax, Bx, i;
int Gerak[max];
int Buffer[max];
int minimum;
int jumlah;
bool sukses;

void doProcess(int g) {
	int j;
	if (jumlah > max || sukses) {
		exit();
	}
	jumlah ++;
	Gerak[jumlah] = g;
	switch(g) {
		case 1:
			if (Ax == 0 && Bx != B) {
				Ax = a;
			} else {
				break;
			}
		case 2:
			if (Ax == A && Bx > 0) {
				Ax = 0;
			} else {
				break;
			}
		case 3:
			if (Ax > 0) {
				Bx = Bx + Ax;
				if (Bx > B) {
					Ax = Bx - B;
					Bx = B;
				}
			} else {
				break;
			}
		case 4:
			if (Bx == 0 && Ax != A) {
				Bx = B;
			} else {
				break;
			}
		case 5:
			if (Bx == B && Ax > 0) {
				Bx = 0;
			} else {
				break;
			}
		case 6:
			if (Bx > 0) {
				Ax = Ax + Bx;
				if (Ax > A) {
					Bx = Ax - A;
					Ax = A;
				} else {
					Bx = 0;
				}
			} else {
				break;
			}
	}
	if (Ax == C || Bx == c) {
		Sukses = true;
	} else if (Ax < A || Bx < B) {
		for (int j = 0; j < 6; j++) {
			if (validMove(g, j)) {
				doProcess(j);
				if (!Sukses) {
					jumlah--;
				}
			}
		}
	}
}
int main() {
	A = 5;
	B = 3;
	C = 4;
	Minimum = Max;
	
	int i = 1;
	while (i <= 6) {
		Ax = 0;
		Bx = 0;
		jumlah = 0;
		Sukses = false;
		doProcess(i);
		if (Sukses && Minimum > jumlah) {
			Minimum = jumlah;
			for (int i = 0; i < max; i++) {
				Buffer[i] = Gerak[i];
			}
		}
		i++;
	}
	if (Minimum == Max) {
		cout << "Gagal";
	} else {
		for (int i = 0; i < Minimum; i++) {
			switch(Buffer[i]) {
				case 1:
					cout << "Isi A";
					break;
				case 2:
					cout << "Buang A";
					break;
				case 3:
					cout << "Pindah A ke B";
					break;
				case 4:
					cout << "Isi B";
					break;
				case 5:
					cout << "Buang B";
					break;
				case 6:
					cout << "Pindah B ke A";
					break;
			}
		}
	}
	return 0;
}
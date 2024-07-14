#include<iostream>
#include<vector>
#include<iomanip>
#include<cmath>
using namespace std;
string kata;
void generateSpiral(int n) {
	// Inisialisasi matriks n x n dengan nilai 0
	vector<vector<int>> matrix (n, vector<int>(n, 0));
	
	int num = 0;
	int row = n / 2;
	int col = n / 2;
	
	matrix[row][col] = kata[num];
	
	int length = 1; // Panjang langkah
	int direction = 0;
	// Arah(0 = kanan, 1 = bawah, 2 = kiri, 3 = atas)
	
	while (num < n * n) {
		switch(direction) {
			case 0:
				for (int i = 0; i < length; ++i) {
					++col;
					matrix[row][col] = kata[++num];
				}
				break;
			case 1:
				for (int i = 0; i < length; ++i) {
					++row;
					matrix[row][col] = kata[++num];
				}
				break;
			case 2:
				for (int i = 0; i < length; ++i) {
					--col;
					matrix[row][col] = kata[++num];
				}
				break;
			case 3:
				for (int i = 0; i < length; ++i) {
					--row;
					matrix[row][col] = kata[++num];
				}
				break;
		}
		// Setelah satu langkah selesai, ubah arah
		direction = (direction + 1) % 4;
			
		// Setiap dua langkah, panjang langkah ditambah 1
		if (direction == 0 || direction == 2) {
			++length;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			char R = matrix[i][j];
			if (matrix[i][j] >= 65 && matrix[i][j] <= 91 || matrix[i][j] == 32 || matrix[i][j] >= 97 && matrix[i][j] <= 113)
				cout << setw(4) << R;
			else
				cout << setw(4) << " ";
		}
		cout << endl;
	}
}
int main() {
	getline(cin, kata);
	int n = sqrt(kata.size());
	if (n % 2 == 0)
		n = n + 1;
	generateSpiral(n);
	return 0;
}
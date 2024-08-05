#include<iostream>
#include<vector>
using namespace std;

void generate(int n) {
	vector<vector<int>> matrix (n, vector<int>(n, 0));
	int num = 1;
	int row = n / 2;
	int col = n / 2;
	
	matrix[row][col] = num;
	
	int length = 1;
	int direction = 0;
	// 0 = ke kanan   1 = ke bawah   2 = ke kiri   3 = ke atas
	while(num < n * n) {
		switch(direction) {
			case 0:
				for (int i = 0; i < length; i++) {
					col ++;
					matrix[row][col] = ++num;
				}
				break;
			case 1:
				for (int i = 0; i < length; i++) {
					++row;
					matrix[row][col] = ++num;
				}
				break;
			case 2:
				for (int i = 0; i < length; i++) {
					--col;
					matrix[row][col] = ++num;
				}
				break;
			case 3:
				for (int i = 0; i < length; i++) {
					--row;
					matrix[row][col] = ++num;
				}
				break;
		}
		direction = (direction + 1) % 4;
		if (direction == 0 || direction == 2) {
			length++; 
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j];
		}
	}
}
int main() {
	int n; cin >> n;
	
	if (n % 2 == 0) {
		
	} else {
		generate(n);
	}
	return 0;
}
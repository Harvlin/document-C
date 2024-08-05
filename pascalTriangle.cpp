#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generatePascalTriangle(int n) {
	vector<vector<int>> triangle (n);
	
	for (int i = 0; i < n; i++) {
		triangle[i].resize(i + 1); 
		triangle[i][0] = triangle[i][i] = 1; // Set elemen pertama dan terakhir = 1
		
		for (int j = 1; j < i; j++) {
			triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
		}
	}
	return triangle;
}

void printPascalTriangle(const vector<vector<int>> &triangle) {
	for (const auto& row : triangle) {
		for (int val : row) {
			cout << val << " ";
		}
		cout << endl;
	}
}

int main() {
	int n; cin >> n;
	
	vector<vector<int>> triangle = generatePascalTriangle(n);
	printPascalTriangle(triangle);
	return 0;
}
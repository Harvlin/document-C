#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> matrix;
	int rows, cols;
	cin >> rows >> cols;

	for (int i = 0; i < rows; i++) {
		vector<int> row(cols);
		for (int i = 0; i < cols; i++)
			cin >> row[i];
		matrix.push_back(row);
	}

	for (const auto &rows : matrix) {
		for (int element : rows)
			cout << element;
		cout << endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(void) {
	short n; cout << "N: "; cin >> n;
	vector<int> numbers;
	vector<int> results;
	
	for (short i = 0; i < n; i++) {
		short num; cin >> num;
		numbers.push_back(num);
	}
	
	for (short i = 0; i < n - 1; i++) {
		if (numbers[i] < numbers[i + 1]) {
			results.push_back((numbers[i + 1] - numbers[i]));
		} else {
			results.push_back((numbers[i] - numbers[i + 1]));
		}
	}
	
	cout << endl;
	
	for (int i : results) {
		cout << i << " ";
	}
	
	if (is_sorted(results.begin(), results.end(), greater<int>())) {
        cout << "Jolly" << endl;
    } else if (is_sorted(results.begin(), results.end())) { 
        cout << "Jolly" << endl;
    } else {
    	cout << "Not Jolly";
	}
	
	return 0;
}
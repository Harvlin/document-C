#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	string kata1, kata2; 
	cin >> kata1 >> kata2;
	
	sort(kata1.begin(), kata1.end());
	sort(kata2.begin(), kata2.end());
	
	if (kata1 == kata2)
		cout << "Anagram";
	else 
		cout << "Bukan";
	return 0;
}
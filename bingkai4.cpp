#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int bilangan; cin >> bilangan; //4
	int n = 0;
	for (int i = 0; i < bilangan; i++) {
		for (int i = 0; i < bilangan; i++) {
			cout << setw(4) << n;
			n++;
		}
		cout << endl;
	}
	return 0;
}
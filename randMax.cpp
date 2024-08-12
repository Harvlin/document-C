#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand(time(0));
	int jum = 32;
	
	for (int i = 1; i <= jum; i++) {
		int j = i + rand() / (RAND_MAX / (jum - i) + 1);
		cout << j << endl;
	}
	return 0;
}
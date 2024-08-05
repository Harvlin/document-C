#include <iostream>
using namespace std;
bool implementasi(bool p, bool q) {
	return !p || q;
}

int main() {
	bool p = true;
	bool q = true;
	if (implementasi(p, q) && p) {
		cout << "q is true";
	} else  {
		cout << "q is false";
	}
	return 0;
}
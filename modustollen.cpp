#include <iostream>
using namespace std;
bool implementasi(bool p, bool q) {
	return !p || q;
}

int main() {
	bool p = true;
	bool q = false;
	if (implementasi(p, q) && q) {
		cout << "q is false";
	} else  {
		cout << "q is true";
	}
	return 0;
}
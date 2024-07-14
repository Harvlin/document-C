#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void generatePermut(string prefix, string remaining)
{
	if (remaining.empty()) {
		cout << prefix << endl;
		// Cetak permutasi yang terbentuk
		return;
	}
	// Gunakan setiap karakter dalam sisa string sebagai kareakter pertama dalam prefix
	for (int i = 0; i < remaining.length(); i++) {
		// Buat string baru dengan menambahkan karakter ke-i dari sisa string ke prefix 
		//dan menghapus karakter ke-i dari sisa string
		generatePermut(prefix + remaining[i], remaining.substr(0, i) + remaining.substr(i+1));
	}
}
int main() {
	string input; cin >> input;
	sort(input.begin(), input.end());
	generatePermut("", input);
	return 0;
}
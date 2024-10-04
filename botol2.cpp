#include<bits/stdc++.h>
using namespace std;

void cetakLangkah(const vector<string> &langkah) {
	for (const string &l : langkah) {
		cout << l << endl;
	}
}

bool dapatkanTakaranAir(int A, int B, vector<string> &langkah, set<pair<int, int>> &visited) {
	if (A == 4) {
		langkah.push_back("Hasil: Botol A berisi 4 liter air");
		return true;
	}
	
	if (visited.find({A, B}) != visited.end()) {
		return false;
	}
	
	visited.insert({A, B});
	
	if (A != 5) {
		langkah.push_back("Isi botol A sampai penuh (5 liter)");
		if (dapatkanTakaranAir(5, B, langkah, visited)) return true;
		langkah.pop_back();
	}
	
	if (A != 0) {
		langkah.push_back("Buang seluruh isi botol A");
		if (dapatkanTakaranAir(0, B, langkah, visited)) return true;
		langkah.pop_back();
	}
	
	if (A > 0 && B < 3) {
		int pindah = min(A, 3 - B);
		langkah.push_back("PIndahkan isi botol A ke botol B");
		if (dapatkanTakaranAir(A - pindah, B + pindah, langkah, visited)) return true;
		langkah.pop_back();
	}
	
	if (B != 3) {
		langkah.push_back("Isi botol B sampai penuh (3 liter)");
		if (dapatkanTakaranAir(A, 3, langkah, visited)) return true;
		langkah.pop_back();
	}
	
	if (B != 0) {
		langkah.push_back("Buang seluruh isi botol B");
		if (dapatkanTakaranAir(A, 0, langkah, visited)) return true;
		langkah.pop_back();
	}
	
	if (B > 0 && A < 5) {
		int pindah = min(B, 5 - A);
		langkah.push_back("Pindahkan isi botol B ke botol A");
		if (dapatkanTakaranAir(A + pindah, B - pindah, langkah, visited)) return true;
		true;
		langkah.pop_back();
	}
	
	return false;
}


int main() {
	vector<string> langkah;
	set<pair<int, int>> visited;
	if (!dapatkanTakaranAir(0, 0, langkah, visited)) cout << "Tidak ada solusi";
	else cetakLangkah(langkah);
	return 0;
}
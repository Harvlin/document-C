#include<bits/stdc++.h>
using namespace std;

void cetakLangkah(const vector<string> &langkah) {
	for (const string &l : langkah) {
		cout << l << endl;
	}
}

void dapatkanTakaranAir() {
	int A = 0, B = 0;
	vector<string> langkah;
	
	A = 5;
	langkah.push_back("Isi botol A sampai penuh (5 liter)");
	
	B = 3;
	A = 2;
	langkah.push_back("Pindahkan isi botol A ke botol B (3 liter)");
	
	B = 0;
	langkah.push_back("Buang seluruh isi botol B");
	
	B = 2;
	A = 0;
	langkah.push_back("Pindahkan sisa isi botol A ke botol B");
	
	A = 5;
	langkah.push_back("Isi botol A sampai penuh (5 liter)");
	
	A = 4;
	B = 3;
	langkah.push_back("Pindahkan isi botol A ke botol B sampai penuh");
	
	langkah.push_back("Hasil: Botol A berisi 4 liter air");
	cetaklangkah(langkah);
}

int main() {
	dapatkanTakaranAir();
	return 0;
}
/*
	Mengisi botol A dengan air sampai penuh
	Membuang seluruh isi botol A
	Pindahkan isi botol A ke B sampai botol B penuh
	Mengisi botol B dengan air samapi penuh
	Membuang seluruh isi botol B
	Memindahkan isi botol B ke bolot A sampai penuh
	
	output program adalah perintah perintah yang harus dilakukan untuk mendapatkan air dengan volume 4 liter mislanya:
	isi A
	pindahkan A ke B
	buang B
	pindah A ke B
*/
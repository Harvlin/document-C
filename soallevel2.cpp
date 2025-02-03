/*
Teman Anda, seorang mahasiswa biokimia, tersandung saat membawa nampan 
berisi file komputer di laboratorium. Semua file jatuh ke lantai dan 
pecah. Teman Anda mengambil semua potongan file yang tersebar dan meminta
bantuan Anda untuk menyusunnya kembali.
Untungnya, semua file di nampan tersebut identik, masing-masing pecah 
menjadi dua fragmen yang ditemukan kembali secara lengkap. Namun, 
file-file tersebut tidak pecah di tempat yang sama, dan semua fragmen 
telah tercampur. Fragmen asli dalam format biner telah diterjemahkan 
menjadi string yang terdiri dari karakter '1' dan '0'. 
Tugas Anda adalah menulis program untuk menentukan pola bit asli dari 
file tersebut.

Format Input
    Input dimulai dengan sebuah bilangan bulat positif pada baris 
	pertama yang menunjukkan jumlah kasus uji, diikuti oleh satu baris 
	kosong. Setiap kasus uji terdiri dari sejumlah "fragmen file," 
	masing-masing dituliskan pada satu baris dan diakhiri 
	dengan EOF (End of File) atau satu baris kosong. Setiap fragmen 
	berupa string yang terdiri dari karakter '1' dan '0'.
Format Output
    Untuk setiap kasus uji, keluaran adalah satu baris string biner 
	yang merupakan pola bit asli dari file tersebut. Jika ada 2N fragmen 
	dalam input, maka seharusnya memungkinkan untuk menggabungkan 
	fragmen-fragmen tersebut dalam pasangan sehingga terbentuk N 
	salinan string asli sebagai hasil keluaran. Jika ada lebih dari 
	satu solusi yang mungkin, program boleh mencetak solusi mana pun.
    Output dari setiap kasus uji dipisahkan oleh satu baris kosong.

Batasan:

    Tidak lebih dari 144 file dalam satu nampan.
    Panjang maksimum file kurang dari 256 byte.

Contoh Input & Output
Input

1

011
0111
01110
111
0111
10111

Output

01110111

Penjelasan Program

    Membaca Input
        Membaca jumlah kasus uji.
        Menggunakan cin.ignore() untuk menangani baris kosong pertama.
        Menggunakan getline(cin, line) untuk membaca fragmen hingga EOF 
		atau baris kosong.

    Menentukan Panjang Pola Asli
        Karena setiap file pecah menjadi dua fragmen, kita bisa 
		menentukan panjang asli dari panjang fragmen terbesar dan 
		panjang terkecil yang ditemukan dalam input.
        Panjang asli file dihitung dengan rumus:
        originalLength=2×maxLength−minLength
        originalLength=2×maxLength−minLength

    Menyusun Fragmen dengan Brute-Force
        Mengambil dua fragmen yang total panjangnya sesuai dengan 
		originalLength.
        Mencoba dua kemungkinan gabungan:
            f1 + f2
            f2 + f1
        Memeriksa apakah semua fragmen dalam daftar dapat ditemukan 
		dalam pola yang terbentuk.

    Mencetak Output
        Jika ditemukan solusi yang valid, program mencetaknya.
        Jika ada lebih dari satu solusi, salah satu yang valid akan 
		dicetak.
        Setiap kasus uji dipisahkan oleh satu baris kosong.

    Urutkan fragmen dari yang terpanjang ke terpendek
    → Ini membantu memastikan bahwa kita mencoba membangun file asli dari potongan terbesar.

    Coba semua kemungkinan kombinasi dua fragmen terbesar sebagai kandidat file asli
    → Ini memastikan kita tidak melewatkan kemungkinan solusi yang benar.

    Gunakan pendekatan berbasis hash-map (unordered_map) untuk mengecek kecocokan fragmen
    → Ini mempercepat proses pencocokan dan menghindari duplikasi.

    Memeriksa apakah semua fragmen dapat dipasangkan dengan benar untuk membentuk file asli
    → Jika semua fragmen dapat digunakan tepat dua kali, maka solusi valid.




*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Fungsi untuk mengecek apakah suatu rekonstruksi valid
bool isValidReconstruction(const string& candidate, vector<string>& fragments) {
    unordered_map<string, int> freq;
    for (const string& f : fragments) freq[f]++;

    vector<string> usedFragments;
    int originalLength = candidate.length();
    
    for (size_t i = 1; i < originalLength; i++) {
        string left = candidate.substr(0, i);
        string right = candidate.substr(i);

        if (freq[left] > 0 && freq[right] > 0) {
            freq[left]--;
            freq[right]--;
            usedFragments.push_back(left);
            usedFragments.push_back(right);
        }
    }

    return usedFragments.size() == fragments.size();
}

// Fungsi utama untuk merekonstruksi file asli
string reconstructFile(vector<string>& fragments) {
    int n = fragments.size();
    if (n == 0) return "";

    // Urutkan fragmen dari yang terpanjang ke terpendek
    sort(fragments.begin(), fragments.end(), [](const string& a, const string& b) {
        return a.length() > b.length();
    });

    int maxLen = fragments[0].length();

    // Cari dua fragmen terpanjang yang bisa membentuk file asli
    for (size_t i = 0; i < fragments.size(); i++) {
        for (size_t j = i + 1; j < fragments.size(); j++) {
            string candidate1 = fragments[i] + fragments[j];
            string candidate2 = fragments[j] + fragments[i];

            if (isValidReconstruction(candidate1, fragments)) return candidate1;
            if (isValidReconstruction(candidate2, fragments)) return candidate2;
        }
    }

    return "No valid reconstruction found";
}

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    bool firstCase = true;
    while (testCases--) {
        if (!firstCase) cout << endl;
        firstCase = false;

        vector<string> fragments;
        string line;
        while (getline(cin, line) && !line.empty()) {
            fragments.push_back(line);
        }

        cout << reconstructFile(fragments) << endl;
    }

    return 0;
}

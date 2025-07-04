#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

map<char, set<char>> bahasaGraph;
set<char> dikunjungi;

// Fungsi untuk menambahkan hubungan antara bahasa
void tambahHubungan(char b1, char b2) {
    bahasaGraph[b1].insert(b2);
    bahasaGraph[b2].insert(b1);
}

// Fungsi DFS untuk mencari kelompok bahasa yang terhubung
void dfs(char bahasa) {
    dikunjungi.insert(bahasa);
    for (char tetangga : bahasaGraph[bahasa]) {
        if (dikunjungi.find(tetangga) == dikunjungi.end()) {
            dfs(tetangga);
        }
    }
}

// Fungsi untuk menghitung jumlah penerjemah yang dibutuhkan
int hitungPenerjemah() {
    int kelompok = 0;
    for (auto& pasangan : bahasaGraph) {
        if (dikunjungi.find(pasangan.first) == dikunjungi.end()) {
            kelompok++;
            dfs(pasangan.first);
        }
    }
    return kelompok - 1; // Penerjemah dibutuhkan untuk menghubungkan kelompok
}

int main() {
    vector<set<char>> diplomat = {
        {'A', 'B'},     // Diplomat 1
        {'B', 'C', 'D'},// Diplomat 2
        {'A', 'D'},     // Diplomat 3
        {'C', 'B'}      // Diplomat 4
    };

    // Membentuk hubungan antar bahasa
    for (const auto& d : diplomat) {
        vector<char> bahasa(d.begin(), d.end());
        for (size_t i = 0; i < bahasa.size(); i++) {
            for (size_t j = i + 1; j < bahasa.size(); j++) {
                tambahHubungan(bahasa[i], bahasa[j]);
            }
        }
    }

    cout << "Jumlah penerjemah yang dibutuhkan: " << hitungPenerjemah() << endl;

    return 0;
}
/*Penjelasan Program

    Menggunakan set<char> untuk menyimpan bahasa setiap diplomat.
        Ini memastikan tidak ada bahasa yang duplikat dalam daftar bahasa setiap diplomat.
    Membentuk graf hubungan antar bahasa dengan map<char, set<char>>
        Misalnya, jika Diplomat 1 bisa A dan B, maka kita menghubungkan A - B dalam graf.
    Gunakan DFS untuk mencari jumlah komponen terhubung
        DFS akan menemukan kelompok bahasa yang saling terhubung.
        Jika ada k kelompok bahasa, maka dibutuhkan k-1 penerjemah.
    Hasil akhir ditampilkan di layar. */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct Siswa {
    string nama;
    int absen;
    float nilai;
};
bool urutBerdasarkanNama(Siswa &a,  Siswa &b) {
    return a.nama < b.nama;
}
bool urutBerdasarkanAbsen(Siswa &a,  Siswa &b) {
    return a.absen < b.absen;
}
bool urutBerdasarkanNilai(Siswa &a,  Siswa &b) {
    return a.nilai < b.nilai;
}

int main() {
    int jumlahSiswa, pilihan;

    cout << "Masukkan jumlah siswa: "; cin >> jumlahSiswa;

    vector<Siswa> daftarSiswa(jumlahSiswa);

    for (int i = 0; i < jumlahSiswa; ++i) {
        cout << "\nSiswa ke-" << i + 1 << endl;
        cout << "Masukkan nama siswa: ";
        cin >> daftarSiswa[i].nama;
        cout << "Masukkan nomor absen: ";
        cin >> daftarSiswa[i].absen;
        cout << "Masukkan nilai siswa: ";
        cin >> daftarSiswa[i].nilai;
    }

    cout << "\nUrutkan berdasarkan:\n1. Nama\n2. Nomor Absen\n3. Nilai\nPilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            sort(daftarSiswa.begin(), daftarSiswa.end(), urutBerdasarkanNama);
            break;
        case 2:
            sort(daftarSiswa.begin(), daftarSiswa.end(), urutBerdasarkanAbsen);
            break;
        case 3:
            sort(daftarSiswa.begin(), daftarSiswa.end(), urutBerdasarkanNilai);
            break;
        default:
            cout << "Pilihan tidak valid. Data tidak diurutkan.\n";
            break;
    }

    cout << "\nData Semua Siswa:\n";
    for (int i = 0; i < jumlahSiswa; ++i) {
        cout << "\nSiswa ke-" << i + 1 << endl;
        cout << "Nama: " << daftarSiswa[i].nama << endl;
        cout << "Nomor Absen: " << daftarSiswa[i].absen << endl;
        cout << "Nilai: " << daftarSiswa[i].nilai << endl;
    }

    return 0;
}

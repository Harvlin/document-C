#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Peserta {
      string id;
      int nilaiSesi1;
      int nilaiSesi2;
      int nilaiSesi3;
};

bool comparePeserta(const Peserta &a, const Peserta &b) {
      if (a.nilaiSesi3 != b.nilaiSesi3)
            return a.nilaiSesi3 > b.nilaiSesi3;

      if (a.nilaiSesi2 != b.nilaiSesi2)
            return a.nilaiSesi2 > b.nilaiSesi2;

      return a.nilaiSesi1 > b.nilaiSesi1;
}

int main() {
      int jumlahKasus;

      cout << "Masukkan jumlah kasus: ";
      cin >> jumlahKasus;

      while (jumlahKasus--) {
            int jumlahPeserta, jumlahLulus;
            string idPesertaDicari;

            cout << "Masukkan jumlah peserta, jumlah yang lulus, dan ID peserta yang dicari: ";
            cin >> jumlahPeserta >> jumlahLulus >> idPesertaDicari;

            vector<Peserta> daftarPeserta(jumlahPeserta);

            cout << "Masukkan ID peserta dan nilai untuk setiap sesi:" << endl;
            for (auto &peserta : daftarPeserta) {
                  cout << "ID dan nilai (sesi 1, sesi 2, sesi 3) untuk peserta: ";
                  cin >> peserta.id >> peserta.nilaiSesi1 >> peserta.nilaiSesi2 >> peserta.nilaiSesi3;
            }

            sort(daftarPeserta.begin(), daftarPeserta.end(), comparePeserta);

            bool lulus = false;
            for (int i = 0; i < jumlahLulus && !lulus; ++i) {
                  if (daftarPeserta[i].id == idPesertaDicari)
                        lulus = true;
            }

            cout << "Hasil: Peserta dengan ID " << idPesertaDicari << " "
                 << (lulus ? "lulus." : "tidak lulus.") << endl;
      }

      return 0;
}
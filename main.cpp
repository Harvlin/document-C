/*
palindrom
Vector
Map
toh
isALldigit
permutasi
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Peserta {
      string id;
      int nilaiSesi1;
      int nilaiSesi2;
      int nilaiSesi3;
};
bool comparePeserta (Peserta a, Peserta b) {
      if (a.nilaiSesi3 != b.nilaiSesi3) {
            return a.nilaiSesi3 > b.nilaiSesi3;
      }

      if (a.nilaiSesi2 != b.nilaiSesi2) {
            return a.nilaiSesi2 > b.nilaiSesi2;
      }

      return a.nilaiSesi1 > b.nilaiSesi1;
}
int main(void) {
      int T;
      cin >> T;
      while (T--) {
            int N, M;
            string idPeserta;
            cin >> N /*3*/ >> M /*1*/ >> idPeserta;

            vector<Peserta> peserta(N);
            for (int i = 0; i < N; i++) {
                  cin >> peserta[i].id >> peserta[i].nilaiSesi1 >> peserta[i].nilaiSesi2 >> peserta[i].nilaiSesi3;
            }

            sort(peserta.begin(), peserta.end(), comparePeserta);

            bool lulus = false;
            for (int i = 0; i < M && !lulus; i++) {
                  if (peserta[i].id == idPeserta) {
                        lulus = true;
                  }
            }
            cout << (lulus ? "YA" : "TIDAK") << endl;
      }
      return 0;
}
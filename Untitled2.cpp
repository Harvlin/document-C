#include <iostream>
#include <vector>
using namespace std;

int main() {
    int banyakBarang;
    cout << "Masukkan jumlah barang: ";
    cin >> banyakBarang;

    int beratMaksimal = 20;
    vector<int> bobot(banyakBarang), nilai(banyakBarang);

    cout << "Masukkan bobot barang: ";
    for (int i = 0; i < banyakBarang; i++) {
        cin >> bobot[i];
    }

    cout << "Masukkan nilai barang: ";
    for (int i = 0; i < banyakBarang; i++) {
        cin >> nilai[i];
    }

    vector<int> dp(beratMaksimal + 1, 0);

    for (int i = 0; i < banyakBarang; i++) {
        for (int berat = beratMaksimal; berat >= bobot[i]; berat--) {
            dp[berat] = max(dp[berat], dp[berat - bobot[i]] + nilai[i]);
        }
    }

    cout << "Nilai maksimum yang bisa diambil: " << dp[beratMaksimal] << endl;
    return 0;
}

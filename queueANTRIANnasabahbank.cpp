##include <iostream>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

// Struktur untuk menyimpan informasi teller (waktu selesai saat ini dan ID teller)
struct Teller {
    int finishTime;  // Waktu di mana teller akan tersedia
    int id;          // ID teller

    bool operator>(const Teller &other) const {
        return finishTime > other.finishTime;  // Urutkan berdasarkan waktu selesai
    }
};

int main() {
    int numTellers, numCustomers;
    cout << "Masukkan jumlah teller: ";
    cin >> numTellers;

    cout << "Masukkan jumlah nasabah: ";
    cin >> numCustomers;

    // Masukkan waktu pelayanan setiap nasabah
    vector<int> customerServiceTime(numCustomers);
    cout << "Masukkan waktu layanan masing-masing nasabah: \n";
    for (int i = 0; i < numCustomers; ++i) {
        cin >> customerServiceTime[i];
    }

    // Priority queue untuk memilih teller yang paling cepat tersedia
    priority_queue<Teller, vector<Teller>, greater<Teller>> tellers;

    // Inisialisasi semua teller sebagai tersedia pada waktu 0
    for (int i = 0; i < numTellers; ++i) {
        tellers.push({0, i});
    }

    vector<int> tellerCustomerCount(numTellers, 0);  // Jumlah nasabah yang dilayani oleh setiap teller
    int currentTime = 0;  // Waktu saat ini

    // Memproses semua nasabah
    for (int i = 0; i < numCustomers; ++i) {
        Teller availableTeller = tellers.top();  // Teller yang paling cepat tersedia
        tellers.pop();

        currentTime = availableTeller.finishTime;  // Waktu ketika teller mulai melayani nasabah ini
        if (currentTime == 0) {
            cout << "Nasabah " << i + 1 << " dilayani oleh teller " << availableTeller.id 
                 << " segera selama " << customerServiceTime[i] << " menit.\n";
        } else {
            cout << "Nasabah " << i + 1 << " mulai dilayani oleh teller " << availableTeller.id 
                 << " setelah " << currentTime << " menit selama " << customerServiceTime[i] << " menit.\n";
        }

        // Update waktu selesai teller dan masukkan kembali ke queue
        availableTeller.finishTime += customerServiceTime[i];
        tellers.push(availableTeller);

        // Hitung berapa banyak nasabah yang dilayani oleh teller tersebut
        tellerCustomerCount[availableTeller.id]++;
    }

    // Output hasil
    cout << "\nTotal nasabah yang dilayani oleh setiap teller:\n";
    for (int i = 0; i < numTellers; ++i) {
        cout << "Teller " << i << " melayani " << tellerCustomerCount[i] << " nasabah.\n";
    }

    return 0;
}

/*

Penjelasan:

    queue digunakan dalam bentuk priority_queue untuk memilih teller yang 
	paling cepat tersedia.
    Teller adalah struktur yang menyimpan waktu kapan teller akan selesai 
	melayani nasabah sebelumnya dan ID teller.
    priority_queue digunakan untuk menyimpan tellers dan memilih teller 
	yang tersedia lebih awal. Teller dengan waktu selesai paling kecil 
	akan diprioritaskan.
    Setelah setiap nasabah dilayani, waktu selesai teller diperbarui dan teller 
	tersebut dimasukkan kembali ke dalam antrian.
    customerServiceTime menyimpan waktu pelayanan setiap nasabah.
    tellerCustomerCount digunakan untuk menghitung berapa banyak nasabah yang 
	dilayani oleh setiap teller.

Contoh Input/Output:

Jika kamu menginput:


Masukkan jumlah teller: 3
Masukkan jumlah nasabah: 5
Masukkan waktu layanan masing-masing nasabah: 
5 10 3 7 2

Maka program akan memberikan output seperti:

mathematica

Nasabah 1 dilayani oleh teller 0 mulai waktu 0 selama 5 menit.
Nasabah 2 dilayani oleh teller 1 mulai waktu 0 selama 10 menit.
Nasabah 3 dilayani oleh teller 2 mulai waktu 0 selama 3 menit.
Nasabah 4 dilayani oleh teller 2 mulai waktu 3 selama 7 menit.
Nasabah 5 dilayani oleh teller 0 mulai waktu 5 selama 2 menit.

Total nasabah yang dilayani oleh setiap teller:
Teller 0 melayani 2 nasabah.
Teller 1 melayani 1 nasabah.
Teller 2 melayani 2 nasabah.

Kompleksitas:

Program ini memiliki kompleksitas O(n log k), di mana n adalah jumlah nasabah dan k adalah jumlah teller, karena kita menggunakan priority_queue untuk melacak teller yang tersedia.
Kegunaan:

Program ini dapat digunakan untuk simulasi antrian di bank, layanan pelanggan, atau situasi serupa di mana beberapa server (teller) menangani pelanggan yang datang dengan waktu layanan yang bervariasi
*/

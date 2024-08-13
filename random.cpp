#include<iostream>
#include<ctime>
using namespace std;

int main() {
    int jumlahOrang, anggotaKelompok;
    cout << "Jumlah orang: "; cin >> jumlahOrang;
    cout << "Jumlah orang dalam kelompok: "; cin >> anggotaKelompok;
    
    int bilangan[jumlahOrang]; // buat array bernama bilangan sebanyak jumlah orang
    
    for (int i = 0; i < jumlahOrang; i++) {
        bilangan[i] = i + 1; // memasukkan orang ke dalam array bilangan
    }
    
    srand(time(0));
    
    for (int i = 0; i < jumlahOrang; i++) {
        int j = rand() % (jumlahOrang - i); /* memasukkan nomor random yang lebih kecil dari jumlah orang ke dalam j, 
                                               jumlah orang selalu dikurang agar angka yang sudah dimasukkan tidak diulang kembali*/
        
        // proses mengacak urutan
        int temp = bilangan[j];
        bilangan[j] = bilangan[i];
        bilangan[i] = temp;
    }
    
    int nokel = 1;
    cout << "Kelompok ke: " << nokel << ": ";
    for (int i = 0; i < jumlahOrang; i++) {
        cout << bilangan[i] << "       ";
        if ((i + 1) % anggotaKelompok == 0 && i + 1 < jumlahOrang) {
            cout << "\nKelompok ke: " << ++nokel << ": ";
        }
    }
    return 0;
}
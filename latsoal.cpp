#include <iostream>
using namespace std;

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    string hasilDekripsi; 
    getline(cin, hasilDekripsi); 

    string kodeEnkripsi; 
    getline(cin, kodeEnkripsi);

    string kataKunci = "";

    for (int i = 0; i < kodeEnkripsi.length(); i++) {
        int posisiKode = alphabet.find(kodeEnkripsi[i]); 
        int posisiDekripsi = alphabet.find(hasilDekripsi[i]); 
        int posisiKunci = (posisiKode - posisiDekripsi + 26) % 26;

        kataKunci += alphabet[posisiKunci];
    }

    cout << "Kata kunci: " << kataKunci << endl;

    return 0;
}
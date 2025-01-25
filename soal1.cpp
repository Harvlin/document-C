#include <iostream>
using namespace std;

int kaliDigit(int n) {
    int hasil = 1;
    
    while (n > 0) {
        int digit = n % 10; //5

        if (digit == 0) return 0;

        hasil *= digit;
        n = n / 10;
    }

    return hasil;
}

int main() {
    int hitung = 0;
    
    for (int i = 1; i <= 1000; i++) {
        int hasilKali = kaliDigit(i);

        if (hasilKali == 0 || hasilKali % 10 == 0) hitung++;
    }
    
    cout << hitung;

    return 0;
}
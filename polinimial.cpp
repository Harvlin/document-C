//Program C++ untuk Evaluasi Polinomial

//Misalnya, kita ingin menghitung nilai dari 
//   P(x)=3x3-2x2+5x-7
//      untuk nilai x tertentu.

#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menghitung nilai polinomial menggunakan Horner's Rule
double evaluatePolynomial(const vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result = result * x + coeffs[i];
    }
    return result;
}

int main() {
    // Koefisien polinomial P(x) = 3x^3 - 2x^2 + 5x - 7
    vector<double> coefficients = {3, -2, 5, -7}; // Koefisien dari x^3 ke x^0

    double x;
    cout << "Masukkan nilai x: ";
    cin >> x;

    // Menghitung nilai polinomial
    double result = evaluatePolynomial(coefficients, x);

    // Menampilkan hasil
    cout << "Nilai polinomial pada x = " << x << " adalah: " << result << endl;

    return 0;
}
/*
Penjelasan Program

    Representasi Polinomial
        Polinomial disimpan dalam vector coefficients, di mana elemen pertama adalah koefisien dari x3x3, elemen kedua dari x2x2, dan seterusnya.

    Evaluasi Polinomial dengan Horner's Rule
        Algoritma Horner digunakan untuk menghindari perhitungan berulang yang tidak perlu.
        Rumusnya adalah:
        P(x)=(...(3x-2)x+5)x-7
        P(x)=(...(3x-2)x+5)x-7
        Dibandingkan dengan cara biasa:
        P(x)=3x3-2x2+5x-7
        P(x)=3x3-2x2+5x-7 yang membutuhkan lebih banyak operasi perkalian.

    Input dan Output
        Pengguna memasukkan nilai xx.
        Program menghitung nilai P(x)P(x) dan menampilkannya.

Contoh Eksekusi
Input:

Masukkan nilai x: 2

Output:

Nilai polinomial pada x = 2 adalah: 15

(Perhitungan manual: P(2)=3(2)3-2(2)2+5(2)-7=15P(2)=3(2)3-2(2)2+5(2)-7=15)
Kesimpulan

    Polinomial adalah ekspresi matematika yang terdiri dari variabel, koefisien, serta operasi penjumlahan dan perkalian
*/    
#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk mengalikan dua polinomial menggunakan convolution
vector<int> multiplyPolynomials(const vector<int>& A, const vector<int>& B) {
    int n = A.size(), m = B.size();
    vector<int> result(n + m - 1, 0);

    // Melakukan convolution (perkalian polinomial)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i + j] += A[i] * B[j];
        }
    }

    return result;
}

// Fungsi untuk mencetak polinomial
void printPolynomial(const vector<int>& poly) {
    int n = poly.size();
    for (int i = 0; i < n; i++) {
        if (poly[i] != 0) {
            if (i > 0 && poly[i] > 0) cout << " + ";
            cout << poly[i];
            if (i > 0) cout << "x^" << i;
        }
    }
    cout << endl;
}

int main() {
    // Contoh polinomial P(x) = 2x^2 + 3x + 4
    vector<int> P = {4, 3, 2};  // Koefisien dari x^0, x^1, x^2

    // Contoh polinomial Q(x) = x + 5
    vector<int> Q = {5, 1};  // Koefisien dari x^0, x^1

    // Menghitung hasil perkalian menggunakan convolution
    vector<int> result = multiplyPolynomials(P, Q);

    // Menampilkan hasil polinomial
    cout << "Hasil perkalian polinomial: ";
    printPolynomial(result);

    return 0;
}

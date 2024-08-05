#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int b, q;
    
    cout << "Q = ";
    cin >> q;

    srand(time(0));

    vector<int> JM(7, 0); 
    vector<int> QUAN;

    for (int i = 0; i < q; i++) {
        b = rand() % 6 + 1;
        QUAN.push_back(b);
        JM[b]++;
        cout << "Lemparan ke " << i + 1 << " muncul " << QUAN[i] << endl;
    }
    
    cout << endl << endl;

    for (int i = 1; i <= 6; i++) {
        cout << i << " kali " << JM[i];
        cout << "   " << (double)JM[i] / q * 100.0 << "% Kemungkinan" << endl;
    }

    return 0;
}

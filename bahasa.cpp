#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Jumlah orang: "; cin >> n;
    cin.ignore();

    map<int, set<string>> orang;
    map<string, int> countBahasa;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan bahasa untuk orang " << i << " (dipisahkan dengan spasi): ";
        string baris, prop;
        getline(cin, baris);
        set<string> bahasa;
        
        size_t pos = 0;
        while ((pos = baris.find(' ')) != string::npos) {
            prop = baris.substr(0, pos);
            bahasa.insert(prop);
            countBahasa[prop]++;
            baris.erase(0, pos + 1);
        }
        bahasa.insert(baris);
        countBahasa[baris]++;
        
        orang[i] = bahasa;
    }
    
    set<int> selected;
    set<int> excluded;
    
    for (auto &[id1, bahasa1] : orang) {
        for (auto &[id2, bahasa2] : orang) {
            if (id1 != id2) {
                bool related = false;
                for (const auto &b : bahasa1) {
                    if (bahasa2.count(b)) {
                        related = true;
                        break;
                    }
                }
                if (related) {
                    excluded.insert(id1);
                    break;
                }
            }
        }
    }
    
    for (auto &[id, _] : orang) {
        if (excluded.find(id) == excluded.end()) {
            selected.insert(id);
        }
    }
    
    cout << "Orang yang dipilih: ";
    for (auto it = selected.begin(); it != selected.end(); ++it) {
        if (it != selected.begin()) cout << ", ";
        cout << *it;
    }
    cout << endl;
    
    return 0;
}
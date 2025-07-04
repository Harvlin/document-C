#include <iostream>
#include <map>
using namespace std;

string romawi(int angka) {
    map<int, string, greater<int>> mapRomawi = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };
    
    string hasil = "";
    
    for(const auto& pair : mapRomawi) {
        while(angka >= pair.first) {
            hasil = hasil + pair.second;
            angka = angka - pair.first;
        }
    }
    
    return hasil;
}

int main() {
    int angka; cin >> angka;
    
    if(angka < 1 || angka > 3999) {
        return 1;
    }
    
    cout << romawi(angka) << endl;
    return 0;
}
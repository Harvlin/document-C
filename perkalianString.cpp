#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string perkalian(string num1, string num2) {
    if (num1 == "0" || num2 == "0") {
        return "0";
    }
    
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end()); 
    
    vector<int> result(num1.length() + num2.length(), 0);
    
    for (int i = 0; i < num1.length(); i++) {
        for (int j = 0; j < num2.length(); j++) {
            result[i + j] += (num1[i] - '0') * (num2[j] - '0');
            result[i + j + 1] += result[i + j] / 10;
            result[i + j] %= 10;
        }
    }
    
    string resultStr = "";
    for (int i = 0; i < result.size(); i++) {
        resultStr += result[i] + '0';
    }
    
    while (resultStr.length() > 1 && resultStr.back() == '0') {
        resultStr.pop_back();
    }
    
    reverse(resultStr.begin(), resultStr.end());
    
    return resultStr;
}

int main() {
    string num1, num2;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> num1;
    
    cout << "Masukkan bilangan kedua: ";
    cin >> num2;
    
    string hasil = perkalian(num1, num2);
    cout << "Hasil perkalian: " << hasil << endl;
    
    return 0;
}
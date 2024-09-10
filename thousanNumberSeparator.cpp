#include<iostream>
#include<sstream>
#include<iomanip>
#include<string>
#include<locale>
using namespace std;

string addThousandSeparator(string number) {
	int n = number.length();
	
	if (n <= 3) {
		return number;
	}
		
	int count = 0;
	string result = "";
	
	for (int i = n - 1; i >= 0; i--) {
		if (count == 3) {
			result = "." + result;
			count = 0;
		}	
		result = number[i] + result;
		count++;
	}
	return result;
}

string formatNumber(string input, int decimalPlaces) {
	size_t pos = input.find('.');
	string integerPart = pos == string::npos ? input : input.substr(0, pos);
	string fractionalPart = pos == string::npos ? "" : input.substr(pos + 1);
	
	integerPart = addThousandSeparator(integerPart);
	
	if (!fractionalPart.empty()) {
		fractionalPart = fractionalPart.substr(0, decimalPlaces);
		while (fractionalPart.length() < decimalPlaces) {
			fractionalPart += "0";
		} 
	}
	
	return fractionalPart.empty() ? integerPart : integerPart + "," + fractionalPart;
}

int main() {
	string input;
	int decimalPlaces;
	
	cout << "Masukkan bilangan: ";
	cin >> input;
	
	cout <<"Masukkan jumlah decimal places: ";
	cin >> decimalPlaces;
	
	string formatedNumber = formatNumber(input, decimalPlaces);
	
	cout << "Bilangan yang diformat: " << formatedNumber << endl;		
	return 0;
}
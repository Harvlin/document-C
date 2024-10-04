#include<bits/stdc++.h>
using namespace std;

string addNumber(string num1, string num2) {
	if (num1.length() < num2.length())
		swap(num1, num2);
	
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	
	string result = "";
	int carry = 0;
	
	for (size_t i = 0; i < num1.length(); i++) {
		int digit1 = num1[i] - '0';
		int digit2 = (i < num2.length()) ? num2[i] - '0' : 0;
		
		int sum = digit1 + digit2 + carry;
		result.push_back((sum % 10) + '0');
		
		carry = sum / 10;
	}
	
	if (carry) 
		result.push_back(carry + '0');
	
	reverse(result.begin(), result.end());
	return result;
}

int main() {
	string num1, num2;
	cin >> num1 >> num2;
	
	string result = addNumber(num1, num2);
	cout << "Hasil: " << result;
	
	return 0;
}
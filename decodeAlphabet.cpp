#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

unordered_map<char, char> createQwertyMap() {
	unordered_map<char, char> qwertyMap;
	string keys = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string shiftedKeys = "`1234567890-=[wertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	
	for (size_t i = 1; i < keys.size(); i++) {
		qwertyMap[keys[i]] = keys[i - 1];
	}
	
	return qwertyMap;
}
string decodeMessage(string input) {
	unordered_map <char, char> qwertyMap = createQwertyMap();
	string output;
	
	for (char ch : input) {
		if (qwertyMap.find(ch) != qwertyMap.end()) {
			output += qwertyMap[ch];
		} else {
			output += ch;
		}
	}
	return output;
}
int main() {
	string input = "ls;o,sy";
	string output = decodeMessage(input);
	cout << output << endl;
	return 0;
}
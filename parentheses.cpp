#include<bits/stdc++.h>
using namespace std;

bool isMatchingPair(char open, char close) {
	set<pair<char, char>> validPairs = {{'(', ')'}, 
										{'{', '}'},
										{'[', ']'}};
	return validPairs.find(make_pair(open, close)) != validPairs.end();
}	

bool isValidParentheses(const string &expression) {
	stack<char> s;
	
	for (char ch: expression) {
		if (ch == '(' || ch == '{' || ch == '[')
			s.push(ch);
		else if (ch == ')' || ch == '}' || ch == ']') {
			if (s.empty() || !isMatchingPair(s.top(), ch)) 
				return false;
			s.pop();
		}
	}
	return s.empty();
}

int main() {
	string expression; cin >> expression;
	if (isValidParentheses(expression)) cout << "valid";
	else cout << "invalid";
	return 0;
}

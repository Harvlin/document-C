#include<bits/stdc++.h>
using namespace std;

// Menentukan prioritas operator	
int getPriority(char op) {
	if (op == '+' || op == '-') return 1;
	if (op == '*' || op == '/') return 2;
	return 0;
}

// Melakukan operasi aritmatika
int applyOperation(int a, int b, char op) {
	switch(op) {
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
		default:
			return 0;
	}
}

// Menghitung ekspresi aritmatika
int evaluateExpression(const string &exp) {
	stack<int> values; // Berisi angka
	stack<int> ops; // Berisi operator
	
	for (int i = 0; i < exp.length(); i++) {
		// Mengabaikan spasi
		if (isspace(exp[i])) continue;
		
		// Jika karakter adalah angka
		if (isdigit(exp[i])) {
			int value = 0;
			// Bisa lebih dari 1 digit angka
			while (i < exp.length() && isdigit(exp[i])) {
				value = (value * 10) + (exp[i] - '0');
				i++;
			}
			values.push(value);
			i--;
		} else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/') {
			// Mengatur operator sesuai prioritas
			while (!ops.empty() && getPriority(ops.top()) >= getPriority(exp[i])) {
				int val1 = values.top(); values.pop();
				int val2 = values.top(); values.pop();
				char op = ops.top(); ops.pop();
				values.push(applyOperation(val2, val1, op));
			}
			// Push operator ke dalam stack ops
			ops.push(exp[i]);
		}
	}
	
	// Melakukan operasi terakhir yang tersisa di stack
	while (!ops.empty()) {
		int val1 = values.top(); values.pop();
		int val2 = values.top(); values.pop();
		char op = ops.top(); ops.pop();
		values.push(applyOperation(val2, val1, op));
	}
	
	return values.top();
}

int main() {
	string exp;
	getline(cin, exp);
	int result = evaluateExpression(exp);
	
	cout << "Hasil: " << result << endl;	
	return 0;
}
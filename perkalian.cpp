#include<iostream>
using namespace std;
/*
int b; cin >> b;
	int h, n, s;
	
		s = b / 10;
		h = b % 10;
		b = s;
		n = n * h;
		cout << n;
		
		
		s = b / 10;
		h = b % 10;
		b = s;
		n = n * h;
		cout << n;
		
		
		s = b / 10;
		h = b % 10;
		b = s;
		n = n * h;
		cout << n;
*/
int calculate(int number)
{
	if (number == 0)
		return 1;
	int lastDigit = number % 10;
	return lastDigit * calculate(number / 10);
}
int main()
{
	int input;
	
	cin >> input;
	
	int number = calculate(input);
	cout << number;
	return 0;
}
#include<iostream>
#include<unordered_set>
#include<cmath>
using namespace std;

bool checkSquare(long long n)
{
	unordered_set<int> digits;
	long long square = n * n;
	
	while (square > 0)
	{
		int digit = square % 10;
		digits.insert(digit);
		square /= 10;
	}
	return digits.size() == 9 && digits.find(0) == digits.end();
}
int main()
{
	cout << "Bilangan hasil kuadrat antara 0 dan 40000" << endl;
	for (long long i = 0; i <= 40000; i++)
	{
		if (checkSquare(i))
			cout << i << " Memiliki hasil kuadrat" << i*i << endl;
	}
}
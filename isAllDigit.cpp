#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

bool hasAllDigits(long long n)
{
	vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	while (n > 0)
	{
		int digit = n % 10;
		auto it = find(digits.begin(), digits.end(), digit);
		if (it != digits.end()) 
		{
			digits.erase(it);
		}
		n /= 10;
	}
	return digits.empty();
}

bool checkSquare(long long n)
{
	long long square = n * n;
	return hasAllDigits(square);
}

int main()
{
	cout << "Bilangan hasil kuadreat antara 0 dan 4000" << endl;
	for (long long i = 0; i <= 40000; i++)
	{
		if (checkSquare(i)) 
			cout << i << " Memiliki hasil kuadrat " << i * i << endl; 
	}
	return 0;
}
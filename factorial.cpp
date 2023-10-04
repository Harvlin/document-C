#include<iostream>
using namespace std;
int F(int);
int main()
{
	F(5);
 	return 0;
}
int F(int n)
{
	cout << n << endl;
	if (n == 1)
		return 1;
	else if (n != 1)
	
		return n * F(n - 1);
	else
		cout << n;
}

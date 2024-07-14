#include<iostream>
using namespace std;
int main()
{
	int bilangan;
	cin >> bilangan;
	int n = 0;
	
	for (int i = 0; i < bilangan/2; i++)
	{
		cout << n;
		n++;	
	}
	n = bilangan - 1;
	cout << endl;
	for (int i = bilangan; i > bilangan/2; i--)
	{
		cout << n;
		n--;
	} 
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	int b = 0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		for (int k = 0; k < i + 1; k++)
		{
			char kr = 65 + k;
			cout << kr;	
		}
		cout << endl;
	}
	return 0;
}
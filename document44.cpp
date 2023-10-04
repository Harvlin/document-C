#include<iostream>
using namespace std;
int main()
{
	int b1, b2;
	cin >> b1 >> b2;
	for (int i = 1; i <= b1; i++) 
	{
		if (i < b1)
			if (i % b2 == 0)
				cout << "* ";
			else
				cout << i << " ";
		else
			cout << i << endl;
	}
 	return 0;
}

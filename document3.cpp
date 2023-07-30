#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int number[] = {5, 3, 2, 4, 1};
	size_t num_element = sizeof(number) / sizeof(number[0]);
	sort(number, number + num_element);
	cout << "Angka yang diurutkan: ";
	for (int i = 0; i<num_element; i++)
	{
		cout<<number[i]<<" ";
	}
 	return 0;
}

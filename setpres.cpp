#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double hrg1 = 34.567, hrg2 = 2356.7, hrg3 = 5674.78;
	double jum = 0;
	jum = hrg1 + hrg2 + hrg3;
	
	cout << 1 << ".      " << setw(11) << fixed << setprecision(2) << hrg1 << endl;
	cout << 2 << ".      " << setw(11) << fixed << setprecision(2) << hrg2 << endl;
	cout << 3 << ".      " << setw(11) << fixed << setprecision(2) << hrg3 << endl;
	
	cout << "Jumlah: " << setw(11) << fixed << setprecision(2) << jum << endl; 
}
#include<iostream>
using namespace std;
const int SATU = 1;
int n;
int getta(int x) 
{
	return x + x;
}
int gotta(int x)
{
	return x + x + SATU;
}
void whats(int x)
{
	int g, h;
	if (x <= n)
	{
		g = gotta(x);
		h = getta(x);
		whats(g);
		cout << x << endl;
		whats(h);
	}
}
int main()
{
	n = 10;
	whats(3);
	return 0;
}
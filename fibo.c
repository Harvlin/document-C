#include<stdio.h>

long long fib(long long x);
long long fib(long long x){
	
	if (x <= 1) {
		return x;
	} else {
		return fib(x-1) + fib(x-2);
	}
}
int main()
{
	
 	return 0;
}

#include<stdio.h>

int fib(int);
int fib(int x){
	
	if (x <= 1) {
		return x;
	} else {
		return fib(x-1) + fib(x-2);
	}
}
int main()
{
	for(int i = 1; i<=5; i++){
		printf("%d ",fib(i));
	}
 	return 0;
}

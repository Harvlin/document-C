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
	for(int i = 10; i<=100; i++){
		printf("%d ",fib(i));
	}
 	return 0;
}

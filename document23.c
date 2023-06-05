#include<stdio.h>
double ctof(double);
double ctor(double);
double ctof(double celcius){
	return 9.0/5 * celcius + 32;
}
double ctor(double celcius){
	return 4.0/5 * celcius;
}
int main()
{
	double cel;
	printf("Celcius: ");scanf(" %lf", &cel);
	printf("Reamur: %0.2lf\n", ctor(cel));
	printf("Fahrenheit: %0.2lf\n", ctof(cel));
 	return 0;
}

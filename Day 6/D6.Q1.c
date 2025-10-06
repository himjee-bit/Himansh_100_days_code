/* 100 days code; Day 6: code1*/
#include<stdio.h>
int main()
{
	double c, f;
	printf("Enter the temprature in celsius");
	scanf("%lf", &c);
	f = (c * 9/5) + 32;
	printf("The entered temprature in fahrenheit is: %lf", f);
	return 0;
}

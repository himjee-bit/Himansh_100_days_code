/* 100 days code; Day 6: code1*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	double c, f;
	printf("Enter the temprature in celsius");
	scanf("%lf", &c);
	f = (c * 9/5) + 32;
	printf("The entered temprature in fahrenheit is: %lf", f);
	return 0;
}


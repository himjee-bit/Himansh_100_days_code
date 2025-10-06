/* 100 days code; Day 4: code1*/
#include<stdio.h>
int main()
{
	float si, p, r, t, amt;
	printf("Enter principal amount, rate and Time:"); scanf("%f %f %f", &p, &r, &t);
	si=(p*r*t)/100; amt=p+si;
	printf("Simple interest is: %f\nTotal amount is: %f", si, amt);
	return 0;
}

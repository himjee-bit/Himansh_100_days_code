/* 100 days code; Day 14: code2*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
	printf("\n-----------------\n");
	int a, i, c, b;
	printf("Enter first and second number: "); scanf("%d %d", &a, &b);
	for(i=1; i<=a; i++)
	{
		if(a%i==0 && b%i==0)
		{
			c=i;
		}
	}
	printf("Greates common divisor of %d and %d is = %d", a, b, c);
	return 0;
}

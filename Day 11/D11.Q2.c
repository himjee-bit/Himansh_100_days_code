/* 100 days code; Day 11: code2*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int a, b=0, c, d;
	printf("Enter the number to be checked: "); scanf("%d", &a);
	d=a;
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		b=b*10+c;
	}
	if(b==d)
	printf("The given number is a pelindromic number!");
	else
	printf("The given number is not a pelindromic number!");
	return 0;
}

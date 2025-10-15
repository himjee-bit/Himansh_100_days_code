/* 100 days code; Day 12: code2*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int a, b, c;
	printf("Enter the number and its power:"); scanf("%d %d", &a, &b);
	c=a;
	for(b; b>1; b--)
	{
		a=a*c;
	}
	printf("The result is: %d", a);
	return 0;
}

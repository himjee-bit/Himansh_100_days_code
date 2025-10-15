/* 100 days code; Day 7: code1*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int a, b;
	printf("Enter two numbers:"); scanf("%d %d", &a, &b);
	if(a>b)
	{
		printf("%d is bigger!", a);
	}
	else if(b>a)
	{
		printf("%d is bigger!", b);
	}
	else
	{
		printf("Both are equal!");
	}
	return 0;
}

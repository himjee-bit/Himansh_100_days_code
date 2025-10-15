/* 100 days code; Day 10: code2*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int a, b=0, c;
	printf("Enter the number: "); scanf("%d", &a);
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		b=b+c;
	}
	printf("Sum of digits = %d", b);
	return 0;
}

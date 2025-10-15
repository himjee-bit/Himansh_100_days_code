/* 100 days code; Day 11: code1*/
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
		b++;
	}
	printf("Total number of digits = %d", b);
	return 0;
}

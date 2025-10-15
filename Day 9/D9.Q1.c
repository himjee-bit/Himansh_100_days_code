/* 100 days code; Day 9: code1*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int n, i, c=1;
	printf("Enter the number: "); scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		c=c*i;
	}
	printf("The factorial is: %d", c);
	return 0;
}

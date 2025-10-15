/* 100 days code; Day 8: code2*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int n, i, c=0;
	printf("Enter the number upto you want the list of natural numbers: "); scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		c=c+i;
	}
	printf("The sum is: %d", c);
	return 0;
}

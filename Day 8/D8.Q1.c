/* 100 days code; Day 8: code1*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int n, i;
	printf("Enter the number upto you want the list of natural numbers: "); scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}

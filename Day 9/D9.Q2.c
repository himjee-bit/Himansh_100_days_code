/* 100 days code; Day 9: code2*/

#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int n, i;
	printf("Enter the number whose table you want: "); scanf("%d", &n);
	for(i=1; i<=10; i++)
	{
		printf("%d X %d = %d\n", n, i, n*i);
	}
	return 0;
}

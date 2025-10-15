/* 100 days code; Day 7: code2*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	int yr;
	printf("Enter the year to be checked:"); scanf("%d", &yr);
	if(((yr%4==0) && (yr%100!=0)) && (yr%400))
	{
		printf("The entered year is a leap year!");
	}
	else
	{
		printf("The entered year is not a leap year!");
	}
	return 0;
}

/* 100 days code; Day 6: code2*/
#include<stdio.h>
#include<math.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
	double p, ci, l, r, n, k;
	printf("Enter principal amount, rate, number of coumpounding periods" );
	scanf("%lf %lf %lf",&p,&r,&n);
	k=(1+(r/100));
	l=pow(k,n);
	ci=(p*l)-p;
	printf("The compound interest interest is %lf", ci);
	return 0;
}


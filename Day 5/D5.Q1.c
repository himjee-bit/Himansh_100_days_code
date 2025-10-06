/* 100 days code; Day 5: code1*/
#include<stdio.h>
int main()
{
	int a,b,sum,prod,sub; float div; 
	printf("Enter the number a and b");
	scanf("%d%d",&a, &b);
	sum = a + b ;
	prod = a*b;
	sub =a-b;
	div = (float) a/b;
	printf("The sum of a and b is %d \nThe difference betweet a and b is %d \nThe product of a and b is %d \nThe answer for a/b is %.5f", sum, sub, prod, div);
	return 0;
}

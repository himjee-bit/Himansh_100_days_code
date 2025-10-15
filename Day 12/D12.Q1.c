/* 100 days code; Day 12: code1*/
#include<stdio.h>
#include<math.h>
void armstrong(int num);
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
	printf("\n-----------------\n");
	int a;
	printf("Enter the number to be checked:"); scanf("%d", &a);
	armstrong(a);
}
void armstrong(int num)
{
	int b=0, c=0, d=0, e=0, f=0, a=num, g=num;
	while(num>0)
	{
		b=num%10;
		num=num/10;
		c++;
	}
	while(a>0)
	{
	    d=a%10;
		a=a/10;
		e=pow(d,c);
		f=f+e;
	}
	if(f==g)
	{
		printf("The entered number is a armstrong number!");
	}
	else
	{
		printf("The entered number is not a armstrong number!");
	}
}


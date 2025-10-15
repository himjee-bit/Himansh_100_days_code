/* 100 days code; Day 14: code1*/
#include<stdio.h>
void prime(int num1, int num2);
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
	printf("\n-----------------\n");
	int a, b;
	printf("Enter the starting number:"); scanf("%d", &a);
	printf("Enter the ending number:"); scanf("%d", &b);
	prime(a, b);
}
void prime(int num1, int num2)
{
	int i, c=0, j;
	for(j=num1; j<=num2; j++)
	{
		if(j==0 || j==1)
		{
			c=c;
		}
		else if(j==2)
		{
			c++;
		}
		else
		{
			for(i=2; i<j; i++)
			{
		    	if(j%i==0)
		    	{
			    	c=c;
			    	break;
		    	}
		    	else
		    	{
		        	c++;
		    	}
	    	}
		}
	}
	printf("Total prime numbers between %d and %d are: %d", num1, num2, c);
}

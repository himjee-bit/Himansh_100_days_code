/* 100 days code; Day 13: code2*/
#include<stdio.h>
void prime(int num);
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
	printf("\n-----------------\n");
	int a;
	printf("Enter the number to be checked:"); scanf("%d", &a);
	prime(a);
}
void prime(int num)
{
	if(num==0 || num==1)
	{
		printf("The entered number (i.e. %d) is neither Prime nor Composite", num);
	}
	else if(num==2)
	{
		printf("The entered number i.e. 2 is the only even primt number!");
	}
	else
	{
		int i, c=0, d=0;
		for(i=2; i<num; i++)
		{
		    if(num%i==0)
		    {
			    c=0;
			    break;
		    }
		    else
		    {
		        c=1;
		    }
	    }
	
	    if(c==0)
	    {
	    	printf("The number is composite!");
	    }
	    else
	    {
	    	printf("The number is prime!");
	    }
	}
}

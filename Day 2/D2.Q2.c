/* 100 days code; Day 1: code2*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
	printf("\n-------------------------------------------------------\n");
    int a, b, c;
    printf("Enter the number to be checked:"); scanf("%d", &a);
    if(a==0)
    {
        c=1;
    }
    else
    {
        c= (int)log10(a)+1;
    }
    while(a>0)
    {
        b=a%10;
        a=a/10;
        for(int i=0; i<=c; i++)
        {
        char pnum[c];
		sprintf(pnum, "%d", b);
		
		}
    }
    return 0;
}

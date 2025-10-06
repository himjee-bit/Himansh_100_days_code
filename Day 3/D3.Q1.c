/* 100 days code; Day 3: code1*/
#include <stdio.h>
int main() 
{

    int n, m, t, b, l, r, i, min;
    printf("Enter the number upto whose you want the pattern: ");
    scanf("%d", &n);
    for(i=0; i<=n*2-1; i++)
    {
       for(m=0; m<=n*2-1; m++)
       {
        t=i; l=m; b=(n*2)-1-i; r=(n*2)-1-m;
        min=t;
        if(l<min){ min=l;}
        if(b<min){ min=b;}
        if(r<min){ min=r;}
        printf("%d", n-min);
       }
       printf("\n");
    }
    return 0;
}

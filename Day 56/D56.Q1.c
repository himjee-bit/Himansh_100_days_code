/* 100 Days Code; Day 56: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}


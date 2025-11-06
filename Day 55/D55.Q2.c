/* 100 Days Code; Day 55: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int start, end, i, j, count;
    printf("Enter range (start end): ");
    scanf("%d%d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for(i=start; i<=end; i++)
    {
        if(i < 2) continue;
        count = 0;
        for(j=1; j<=i; j++)
            if(i % j == 0)
                count++;
        if(count == 2)
            printf("%d ", i);
    }
    return 0;
}


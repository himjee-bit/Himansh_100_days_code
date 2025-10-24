/* 100 Days Code; Day 37: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += i;

    printf("Sum of first %d natural numbers = %d", n, sum);
    return 0;
}

/* 100 Days Code; Day 37: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d = %d", n, fact);
    return 0;
}

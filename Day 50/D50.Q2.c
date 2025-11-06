/* 100 Days Code; Day 50: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2)
        sum += i;

    printf("Sum of even numbers = %d", sum);
    return 0;
}


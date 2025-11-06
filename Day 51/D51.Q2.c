/* 100 Days Code; Day 51: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int base, exp;
    long long power = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for(int i = 1; i <= exp; i++)
        power *= base;

    printf("Result = %lld", power);
    return 0;
}


/* 100 Days Code; Day 35: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int a, b, min, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    min = (a < b) ? a : b;

    for(int i = 1; i <= min; i++){
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d", gcd);
    return 0;
}

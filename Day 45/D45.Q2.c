/* 100 Days Code; Day 45: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, sum = 0, r;
    printf("Enter number: ");
    scanf("%d", &n);

    while(n){
        r = n % 10;
        sum += r;
        n /= 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}

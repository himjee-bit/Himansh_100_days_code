/* 100 Days Code; Day 46: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, rev = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    printf("Reversed number = %d", rev);
    return 0;
}


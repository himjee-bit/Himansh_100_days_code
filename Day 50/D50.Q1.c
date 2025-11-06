/* 100 Days Code; Day 50: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
        count++;
        n /= 10;
    }

    printf("Number of digits = %d", count);
    return 0;
}


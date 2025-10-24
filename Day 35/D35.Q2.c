/* 100 Days Code; Day 35: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while(n){
        count++;
        n /= 10;
    }

    printf("Number of digits = %d", count);
    return 0;
}

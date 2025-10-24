/* 100 Days Code; Day 32: Code 2 */
#include<stdio.h>
int sumDigits(int n){
    if(n==0) return 0;
    return (n%10)+sumDigits(n/10);
}
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Sum of digits = %d", sumDigits(n));
    return 0;
}

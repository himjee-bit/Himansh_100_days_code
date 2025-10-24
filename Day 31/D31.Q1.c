/* 100 Days Code; Day 31: Code 1 */
#include<stdio.h>
int fact(int n){
    if(n==0) return 1;
    return n * fact(n-1);
}
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}

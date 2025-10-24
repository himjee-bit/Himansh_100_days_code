/* 100 Days Code; Day 31: Code 2 */
#include<stdio.h>
int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i<=n/2;i++)
        if(n%i==0) return 0;
    return 1;
}
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isPrime(n)) printf("Prime");
    else printf("Not Prime");
    return 0;
}

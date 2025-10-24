/* 100 Days Code; Day 36: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n, rev = 0, r;
    printf("Enter number: ");
    scanf("%d", &n);

    while(n){
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    printf("Reversed Number = %d", rev);
    return 0;
}

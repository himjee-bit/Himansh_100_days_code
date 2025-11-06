/* 100 Days Code; Day 46: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, temp, r, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(n != 0){
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    if(temp == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
    return 0;
}


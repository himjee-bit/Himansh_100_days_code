/* 100 Days Code; Day 47: Code 1 */
#include<stdio.h>
#include<math.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, temp, digits = 0, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp != 0){
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0){
        r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}


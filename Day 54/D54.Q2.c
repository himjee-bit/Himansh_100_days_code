/* 100 Days Code; Day 54: Code 2 */
#include<stdio.h>
#include<math.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, temp, rem, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0)
    {
        temp /= 10;
        digits++;
    }

    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);

    return 0;
}


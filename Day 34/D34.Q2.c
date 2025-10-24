/* 100 Days Code; Day 34: Code 2 */
#include<stdio.h>
#include<math.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n, sum = 0, temp, r, digits = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp){
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while(temp){
        r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    if(sum == n)
        printf("%d is Armstrong", n);
    else
        printf("%d is Not Armstrong", n);

    return 0;
}

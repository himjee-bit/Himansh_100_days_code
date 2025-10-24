/* 100 Days Code; Day 34: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n, i, flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 1)
        flag = 1;
    for(i = 2; i <= n/2; i++)
        if(n % i == 0){
            flag = 1;
            break;
        }

    if(flag == 0)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);

    return 0;
}

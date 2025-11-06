/* 100 Days Code; Day 47: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
        flag = 1;

    for(i = 2; i <= n/2; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("%d is a Prime Number", n);
    else
        printf("%d is not a Prime Number", n);

    return 0;
}


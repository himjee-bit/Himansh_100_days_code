/* 100 Days Code; Day 41: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while(1){
        if(max % a == 0 && max % b == 0)
            break;
        max++;
    }

    printf("LCM = %d", max);
    return 0;
}

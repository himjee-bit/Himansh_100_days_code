/* 100 Days Code; Day 39: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++)
            printf(" ");
        for(int k = 1; k <= i*2-1; k++)
            printf("*");
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = n; j > i; j--)
            printf(" ");
        for(int k = 1; k <= i*2-1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}

/* 100 Days Code; Day 18: Code 1 */
#include<stdio.h>

int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }

    return 0;
}

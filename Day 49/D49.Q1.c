/* 100 Days Code; Day 49: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("%d is greatest", a);
    else if(b > c)
        printf("%d is greatest", b);
    else
        printf("%d is greatest", c);

    return 0;
}


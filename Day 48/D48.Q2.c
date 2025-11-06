/* 100 Days Code; Day 48: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, a = 0, b = 1, c, sum = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        c = a + b;
        sum += c;
        a = b;
        b = c;
    }

    printf("Sum of Fibonacci Series = %d", sum);
    return 0;
}


/* 100 Days Code; Day 48: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", a, b);
    for(int i = 2; i < n; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}


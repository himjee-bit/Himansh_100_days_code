/* 100 days code; Day 13: code1*/
#include <stdio.h>

int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse: BSc. CS. \nBatch: 1");
	printf("\n-----------------\n");
    int n, first=0, second=1, next, i;
    printf("Enter the number of terms: "); scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i=1; i<=n; i++) 
	{
        printf("%d\t", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}

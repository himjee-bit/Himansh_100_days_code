/* 100 Days Code; Day 27: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];
    printf("Largest = %d", max);
    return 0;
}

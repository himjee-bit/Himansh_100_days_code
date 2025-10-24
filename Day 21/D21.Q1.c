/* 100 Days Code; Day 21: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n, i, arr[100], max;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    for(i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];

    printf("Largest element = %d", max);

    return 0;
}

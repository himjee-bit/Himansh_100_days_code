/* 100 Days Code; Day 53: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < min)
            min = arr[i];

    printf("Minimum element = %d", min);
    return 0;
}


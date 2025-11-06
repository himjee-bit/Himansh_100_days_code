/* 100 Days Code; Day 52: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
    printf("\n-----------------\n");

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], sum = 0;
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);
    return 0;
}


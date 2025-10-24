/* 100 Days Code; Day 23: Code 1 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n, i, arr[100], even=0, odd=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even: %d, Odd: %d", even, odd);
    return 0;
}

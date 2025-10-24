/* 100 Days Code; Day 23: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    int n,i,j,arr[100],count;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nElement | Frequency\n");
    for(i=0;i<n;i++){
        count=1;
        if(arr[i]!=-1){
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                	count++;
                    arr[j]=-1;
                }
            }
            printf("%d -> %d\n",arr[i],count);
        }
    }
    return 0;
}

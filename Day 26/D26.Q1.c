/* 100 Days Code; Day 26: Code 1 */
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    char s1[100], s2[100];
    printf("Enter two strings:\n");
    gets(s1); gets(s2);

    if(strcmp(s1,s2)==0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}

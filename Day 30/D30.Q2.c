/* 100 Days Code; Day 30: Code 2 */
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(rev, str);
    strrev(rev);
    if(strcmp(str, rev)==0)
        printf("Palindrome String");
    else
        printf("Not Palindrome");
    return 0;
}

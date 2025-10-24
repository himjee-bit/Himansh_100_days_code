/* 100 Days Code; Day 25: Code 1 */
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    char str[100];
    printf("Enter string: ");
    gets(str);

    char rev[100];
    strcpy(rev, str);
    strrev(rev);

    if(strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

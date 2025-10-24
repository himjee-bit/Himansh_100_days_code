/* 100 Days Code; Day 26: Code 2 */
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    char s1[100], s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    strcat(s1, s2);
    printf("Concatenated string: %s", s1);
    return 0;
}

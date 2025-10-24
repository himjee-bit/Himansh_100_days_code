/* 100 Days Code; Day 29: Code 2 */
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    char str[100];
    printf("Enter a string: ");
    gets(str);
    strrev(str);
    printf("Reversed String: %s", str);
    return 0;
}

/* 100 Days Code; Day 25: Code 2 */
#include<stdio.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    char src[100], dest[100];
    printf("Enter source string: ");
    gets(src);

    int i;
    for(i=0; src[i]!='\0'; i++)
        dest[i]=src[i];
    dest[i]='\0';

    printf("Copied string: %s", dest);
    return 0;
}

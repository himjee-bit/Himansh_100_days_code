/* 100 Days Code; Day 30: Code 1 */
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    char str[100];
    int vowels=0, consonants=0, i;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        char ch = tolower(str[i]);
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}

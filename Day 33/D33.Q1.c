/* 100 Days Code; Day 33: Code 1 */
#include<stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main()
{
    printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
    printf("\n-----------------\n");

    struct student s;
    printf("Enter name, roll and marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f", s.name, s.roll, s.marks);
    return 0;
}

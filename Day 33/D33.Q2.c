/* 100 Days Code; Day 33: Code 2 */
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

    struct student s[3];
    for(int i=0;i<3;i++){
        printf("Enter name, roll and marks of student %d: ", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    printf("\n--- Student Details ---\n");
    for(int i=0;i<3;i++)
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    return 0;
}

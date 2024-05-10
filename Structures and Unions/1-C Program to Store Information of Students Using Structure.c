//C Program to Store Information of Students Using Structure
#include <stdio.h>

typedef struct 
{
    char* name; 
    int roll_number;
    int age;
    double total_marks;

} student;
 
int main(){

    student student[4];

    student[0].roll_number = 1;
    student[0].name = "Emir";
    student[0].age = 12;
    student[0].total_marks = 78.50;
 
    student[1].roll_number = 5;
    student[1].name = "Yusuf";
    student[1].age = 10;
    student[1].total_marks = 56.84;
 
    student[2].roll_number = 2;
    student[2].name = "Emre";
    student[2].age = 11;
    student[2].total_marks = 87.94;
 
    student[3].roll_number = 4;
    student[3].name = "Ceyda";
    student[3].age = 12;
    student[3].total_marks = 89.78;
 
    student[4].roll_number = 3;
    student[4].name = "Irem";
    student[4].age = 13;
    student[4].total_marks = 78.55;
    
    printf("Student Records:\n\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("\tName = %s\n", student[i].name);
        printf("\tRoll Number = %d\n", student[i].roll_number);
        printf("\tAge = %d\n", student[i].age);
        printf("\tTotal Marks = %0.2f\n\n", student[i].total_marks);
    }

}
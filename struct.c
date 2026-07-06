#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int age;
    float Fees;
    char courseName[20];
};

int main(){
    struct Student s1;
    struct Student s2;
    struct Student s3;
    struct Student s4;
    strcpy(s1.name,"Arun");
    s1.age = 22;
    s1.Fees = 9000.000;
    strcpy(s1.courseName,"c++");
    printf("The student name is %s\n",s1.name);
    printf("The student courseName is %s\n",s1.courseName);
    printf("The Course Fees is %f\n",s1.Fees);

    strcpy(s2.name,"Rithvik");
    s2.age = 20;
    s2.Fees = 11000.000;
    strcpy(s2.courseName,"c");
    printf("The student name is %s\n",s2.name);
    printf("The student courseName is %s\n",s2.courseName);
    printf("The Course Fees is %f",s2.Fees);
    
}
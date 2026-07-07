#include <stdio.h>
struct Course{ 
    char CourseName[20];
};
struct Student{
    char name[20];
    struct Course CN;
};


int main(){
    struct Student s = {
        "Bala",{"C++"}
    };
    printf("%s\n",s.name);
    printf("%s\n",s.CN.CourseName);
}
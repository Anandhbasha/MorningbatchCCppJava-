#include <stdio.h>

struct Show
{
   int age;
};

int main(){
    struct Show s={25};
    struct Show *ptr = &s;
    printf("%d",ptr->age);
}
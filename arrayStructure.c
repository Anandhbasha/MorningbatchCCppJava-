#include <stdio.h>

struct  Student{
    int id;
    char name[20];
};


int main(){
    struct  Student s[2] = {
        {1,"Anandh"},
        {2,"Bala"}
    };
    
    for(int x =0;x<2;x++){
        printf("The Student id is:%d\n The Student name is:%s\n",s[x].id,s[x].name);
    }
}

// {10,20,30,40}
// sizeof(arr)-> 4*4 = 16
// 4->16/4 ->4
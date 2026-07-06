#include <stdio.h>

void change(int *num){
    *num = 100;
}

int main(){
     int a =10;
    printf("Before function:%d\n",a);
    change(&a);
    printf("After functions:%d\n",a);
}
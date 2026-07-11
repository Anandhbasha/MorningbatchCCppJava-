#include<stdio.h>

int show(int x){
    x=100;
}

int main(){
    int a= 50;
    printf("Before function Calls%d\n",a);
    show(a);
    printf("After function Calls%d\n",a);
}
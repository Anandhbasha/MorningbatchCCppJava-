#include <stdio.h>
int main(){
    int a= 20;
    int *p = &a;
    *p = 60;
    printf("%d",a);

}
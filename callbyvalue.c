#include <stdio.h>

void change(int num){
    num = 100;
    printf("The num value is %d\n",num);
}
int main(){
    int a =10;
    printf("Before function:%d\n",a);
    change(a);
    printf("After functions:%d\n",a);
}
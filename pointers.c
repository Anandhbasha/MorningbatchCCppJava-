#include <stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    printf("value = %d\n",a); //10
    printf("address = %p\n",&a); //
    printf("value = %d\n",*ptr);
    printf("address = %p\n",ptr);
}
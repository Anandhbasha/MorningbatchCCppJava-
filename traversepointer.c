#include <stdio.h>
int main(){
    // int arr [] = {88,12,8,7,92,6};
    // int *ptr = arr;
    // for (int i=0;i<6;i++){
    //     printf("%d\n",*ptr);
    //     ptr++;
    // }
    // char ch [] = {'A','B','c'};
    // char *ptr = ch;
    // ptr++;
    // printf("%c",*ptr);
    int a = 10;
    int *ptr = &a;
    *(ptr) = 20;
    printf("%d",a);
}
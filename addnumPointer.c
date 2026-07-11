#include <stdio.h>
int main(){
    int arr[] = {88,12,8,7,92,6};
    // int *ptr = arr;
    int *ptr = &arr[5];
    --ptr;
    printf("%d",*ptr);
    // printf("%d",*(ptr-2)); 
    // int *ptr = arr;
    // printf(" The first output %d\n",*ptr); 
    // ++ptr;
    // printf("%d\n",*ptr); 
    // ++ptr;
    // printf("%d",*ptr);

}

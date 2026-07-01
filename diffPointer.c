#include <stdio.h>
int main(){
    int arr[] = {88,12,8,7,92,6};
    int *ptr = &arr[0];
    int *ptr1 = &arr[5];
    printf("%d",ptr1-ptr);

}
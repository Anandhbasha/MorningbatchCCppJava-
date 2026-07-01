#include <stdio.h>
int main(){
    int arr[] = {88,12,8,7,92,6};
    // int *ptr = arr;
    int *ptr = &arr[5];
    printf("%d",*(ptr-2));  
}

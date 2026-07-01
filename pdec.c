#include <stdio.h>
int main(){
    int arr[] = {88,12,8,7,92,6};
    int *ptr = &arr[5];
    printf("%d\n",*ptr);
    ptr--;
    printf("%d\n",*ptr);
    ptr--;
    printf("%d\n",*ptr);
    ptr--;
    printf("%d\n",*ptr);
    ptr--;
    printf("%d\n",*ptr);
    ptr--;
    printf("%d\n",*ptr);
}
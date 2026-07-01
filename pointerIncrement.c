#include <stdio.h>
int main(){
    int arr[] = {88,12,8,7,92,6};
    int *ptr = arr;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
}
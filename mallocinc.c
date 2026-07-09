// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *n;
//     // null -> garbage collection
//     n = (int*)malloc(sizeof(int));
//     // 2*4 = 8
//     // 4bytes
//     // 5000
//     *n =100;
//     printf("%d",*n);
//     free(n);
// }

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    arr = (int*)malloc(sizeof(int));
    for(int i=0;i<5;i++){
        arr[i] = (i+1)*10;
    }
    for(int k=0;k<5;k++){
        printf("%d",arr[k]);
    }
    free(arr);
}
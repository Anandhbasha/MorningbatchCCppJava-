#include <stdio.h>
int main(){
    // int arr [] = {10,20,30,40,50,60};
    // index should start with 0
    // 10->0
    // 20 ->1
    // 30 ->2
    // 40 ->3
    // length = 4 no of elements
    // printf("%d\n",arr[0]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[3]);
    // printf("%d\n",arr[4]);
    // printf("%d\n",arr[5]);
    int newarr[5];
    for(int i=0;i<6;i++){
        scanf("%d",&newarr[i]);
    }
    for(int i=0;i<5;i++){
        printf("The arra value is:%d\n",newarr[i]);
    }
}

// 20
// int s1 =30
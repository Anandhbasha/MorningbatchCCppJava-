#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));
    for(int x =0;x<5;x++){
        printf("%d",*ptr);
    }
}
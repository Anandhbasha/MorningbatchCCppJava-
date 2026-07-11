#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("Enter the length of the Element");
    scanf("%d",&a);

    // int *ptr = (int *)malloc(a*sizeof(int));
    int *ptr = (int *)calloc(a,sizeof(int));
   
    // int size is 4byte->5*4 = 20byte
    // molloc will return void
    for(int i=0;i<a;i++){
        ptr[i] = i+1;
        // printf("%d\n",ptr[i]);
    }

    int *p = (int *)realloc(ptr,3*sizeof(int));

     for(int i=5;i<8;i++){
        ptr[i] = i+1;
        // printf("%d\n",ptr[i]);
    }
     for(int i=0;i<8;i++){
        printf("%d\n",ptr[i]);
    }
}
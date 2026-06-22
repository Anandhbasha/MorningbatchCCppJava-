#include<stdio.h>
int main(){
    int a; //moemory allocated ->address->11
    int b;
    char ch;    
    printf("Enter the A value:");
    scanf("%d",&a);
    printf("Enter the b value:");
    scanf("%d",&b); 
    printf("Enter the Char Value:");
    scanf("%c",&ch);  
    printf("The A value is:%d\n",a);
    printf("The b value is:%d\n",b);
    printf("The C value is:%c\n",ch);
    return 0;
}
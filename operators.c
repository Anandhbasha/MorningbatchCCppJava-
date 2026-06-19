// arithmetic
// +,-,*,/,%
// (),
// BODMAS
// Bracket
// off
// Division
// Multiplication
// Add
// Sub
// relational
// >,<,>=,<=,!=

// Logical
// Assigment
// increment
// decrement


#include <stdio.h>
int main(){
    int a=5;
    int b=3;
    // arithmetic
    // printf("The Addition value is:%d\n",a+b); //15
    // printf("The Substraction value is:%d\n",a-b); //5
    // printf("The Multiplication value is:%d\n",a*b); //50
    // printf("The Divison value is:%d\n",a/b); //2.0
    // printf("The Remainder value is:%d\n",a%b); //0
    // printf("%d",(a>b)); //10>5->1
    // printf("%d",(a<b));//10<5 ->0
    // printf("%d",(a<=b)); //10<=5 ->0
    // printf("%d",(a>=b)); //10>=5 ->1
    // printf("%d",(a==b)); //10==5 ->0
    // printf("%d",(a!=b)); //10!=5 ->1
    // and or not
    // printf("%d\n",(a>b)&&(a>=b)&&(a<b));
    // printf("%d\n",(a>b)||(a>=b)||(a<b));
    // printf("%d\n",(a>b)&&(a>=b)||(a<b)); 
    // // printf("%d\n",(!(a<=b))||(a<b)); 
    // int c = 20;
    // // = assign a value of 20 to the varible c
    // // Add assigment
    // c+=10;
    // // c = c+10
    // printf("The c Value is:%d",c);
    //  c-=10;
    // printf("The c Value is:%d",c);
    // c*=10;
    // printf("The c Value is:%d",c);
    // c/=10;
    // printf("The c Value is:%d",c);
    // c%=10;
    // printf("The c Value is:%d",c);
    // printf("%d\n",++a); 
    // printf("%d\n",a++); 
    // printf("%d\n",a);  
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    return 0;
}

// 5 ->01
// 
// 5/2 = 2 ->1
//   101
// 3 ->
// 11
// 10 ->
// 7 -> 2 
// 111
// 0101
// 1111
// 1111 

// 0*8+4*1+1*2+1*1 = 7
// 5
// 2

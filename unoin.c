#include <stdio.h>
union Data{
    int a;
    float b;
};


int main(){
    union Data d;
    d.a=10;
    printf("%d\n",d.a);
    d.b=10.20;
    printf("%f\n",d.b);
}
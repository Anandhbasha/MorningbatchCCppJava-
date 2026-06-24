#include <stdio.h>
int main(){
    int a =20;
    int a =30;
    {
        int x =20;
        printf("%d",a);
    }
    printf("%d",x);
    printf("%d",a);
    return 0;
}
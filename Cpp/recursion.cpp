#include <iostream>
using namespace std;

// 5,4,3,2,1->120
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
    // 5*4 =20*3 = 60 *2 =120
}

int main(){
    cout<< fact(5);
}
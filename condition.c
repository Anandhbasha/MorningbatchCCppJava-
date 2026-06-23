// if
// if(condition){
//     // code -> one time excute
// }
#include <stdio.h>
int main(){
    int temp = 18;
    
    if(temp<20){
        printf("Switch off the Ac and Fan");
    }
    else if(temp>=32){
        printf("Switch on the AC");
    }else{
        printf("Switch on the Fan");
    }
    return 0;
}

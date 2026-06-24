// #include <stdio.h>
// int add(){
//    printf("Welcome to functions\n") ;
// }
// int main(){
//     add();
//     add();
//     add();
//     add();
//     add();
//     add();
//     add();
//     return 0;
// }

#include <stdio.h>
double avg(float totalMarks){
    double average = totalMarks/5;
    return average;
}

double total(int t,int e,int m,int s,int ss){
    int tot =  t+e+m+s+ss;
    float stuAvg = avg(tot);    
    return stuAvg;
}

int main(){
    printf("%.2f\n",total(50,88,77,66,67));
    printf("%.2f\n",total(50,99,87,66,67));
    
    return 0;
}
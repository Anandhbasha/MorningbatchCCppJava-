// #include<stdio.h>
// int main(){
//     FILE *f;
//     char text[50];
//     f = fopen("textNew.txt","r");
//     fgets(text,50,f);
//     printf("%s",text);
//     fclose(f);
// }

#include<stdio.h>
int main(){
    FILE *f;
    char text[50];
    f = fopen("textNew.txt","r");    
    while(fgets(text,50,f)!=NULL){
        printf("%s",text);
    }    
    fclose(f);
    remove("new.txt");
}
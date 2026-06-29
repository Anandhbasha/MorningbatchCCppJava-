#include <stdio.h>
#include <string.h>
int main(){
    // char name[] = "Tamil";
    // printf("%s",name);
    // \0 -> Null charcter
    // T-> 0
    // a= 1
    // m ->2
    // i ->3
    // l ->4
    // \0 ->5
    // string ends here
    // char ch[20];
    // scanf("%s",ch);
    // fgets(ch,sizeof(ch),stdin);
    // printf("%s",ch);
    // printf("%c",ch[0]);
    // printf("%c",ch[1]);
    // printf("%c",ch[2]);
    // for(int i=0;ch[i]!='\0';i++){
    //     printf("%c\n",ch[i]);

    // }
    char name[20] = "Kalai";
    // printf("%d",strlen(name));
    char b[20] = "\tSelvan";
    // strcpy(b,name);
    
    // printf("%s",strcat(name,b));
    // printf("%d",strcmp(name,b));
    strcat(name," ");
    strcat(name,b);
    printf("%s",name);

}
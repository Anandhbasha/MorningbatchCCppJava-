#include <stdio.h>
int main(){
    FILE *fp;
    char c;
    fp = fopen("new.txt","r");
    // fprintf(fp,"Name:Muthu\n");
    // fprintf(fp,"Age:25\n");
    // fclose(fp);
    // printf("File Created Succesfully");
    while((c=fgetc(fp))!=EOF){
        printf("%c\n",c);
    }
    fclose(fp);
}
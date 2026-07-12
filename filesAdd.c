#include <stdio.h>
#include <string.h>
int main(){
    FILE *f;
    char text[50];
    printf("Enter the to Add on Text file:");
    fgets(text,50,stdin);
    // scanf
    // Anandha\0kumar
    f = fopen("textNew.txt","w");
    fputs(text,f);
    fclose(f);
    printf("text added to txt File");
}
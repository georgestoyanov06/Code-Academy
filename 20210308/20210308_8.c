#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char str[23]="hello there";
    char *ptrStr=str;
    fp=fopen("test1.txt","w");
     if(fp==NULL){
        perror("error");
        exit(1);
    }
    
    fputs(ptrStr,fp);
    fputs("\n",fp);
    fputs(ptrStr,fp);
    fclose(fp);
    return 0;
}
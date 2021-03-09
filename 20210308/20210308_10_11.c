#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    FILE *fp;
    fpos_t poziciq;
    char str[23]="hello there";
    char *ptrStr=str;
    fp=fopen("test1.txt","w");
     if(fp==NULL){
        perror("error");
        exit(1);
    }
    fgetpos(fp,&poziciq);
    printf("%d\n",poziciq);
    fputs(ptrStr,fp);
    fputs("\n",fp);
    fputs(ptrStr,fp);
    fgetpos(fp,&poziciq);
    printf("%d",poziciq);
   /* long value=ftell(fp);
    
    printf("%ld",value);*/
    
    
    fclose(fp);
    
    return 0;
}
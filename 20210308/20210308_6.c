#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    fp=fopen("test1.txt","rt");
    for(;;){
        char *value=malloc(30);
        fscanf(fp,"%s",value);
        if(feof(fp)){
            break;
        }
        printf("%s\n",value);
    }
    fclose(fp);
}
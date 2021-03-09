#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp=NULL;
    char str[25];
    
    char *fileName="test1.txt";
    fp=fopen(fileName,"rt");
    if(fp==NULL){
        perror("error");
        exit(1);
    }

    if(fgets(str,25,fp)!=NULL){
        printf("%s",str);
    }
fclose(fp);
    return 0;
}
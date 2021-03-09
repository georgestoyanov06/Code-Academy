#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp=NULL;
    char testF;
    char *fileName="test1.txt";
    fp= fopen(fileName,"rt");
    if(fp==NULL){
        perror("error\n");
        exit(1);
    }
    
    while((testF=fgetc(fp))!=EOF){
        printf("%c",testF);

    }

}   

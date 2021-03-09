#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp=NULL;
    char *fileName="rename.txt";
    fp= fopen(fileName,"a");
    if(fp==NULL){
        printf("error\n");
    }

    
    fclose(fp);
    fp=NULL;

    if(rename(fileName,"test10.txt")){
        printf("Failed to rename file.");}
        else{
            printf("file renamed succsessfully");
        }
    
    /*remove("test2.txt");*/
}
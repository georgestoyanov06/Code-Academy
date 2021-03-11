/*Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл.*/
#include <stdio.h>

#define maxLineSize 40
int linenum = 1;
int pagenum = 1;

void pageNum(FILE *fp){
    int c;

    while(1){
    
    c=fgetc(fp);
    if(c=='\n'){
        linenum+=1;
    }
    if(linenum==maxLineSize){
        pageNum+=1;
        linenum=1;
    }
    
    if(feof(fp){
        break;
    }
    }

}
int main(int argc, char **argv){
     FILE *fp;
     
}
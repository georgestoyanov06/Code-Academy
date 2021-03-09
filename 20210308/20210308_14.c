/*Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp;
    FILE *fp1;
    fp=fopen("test10.txt","r");
    fp1=fopen("test1.txt","w+");
    int c;
    for(;;){
        fscanf(fp,"%c",&c);
       
        if(feof(fp)){
            break;
        }
        fputc(toupper(c),fp1);
    }
     
fclose(fp);
fclose(fp1);
remove("test10.txt");
 if(rename("test1.txt","test10.txt")){
        printf("Failed to rename file.");}
        else{
            printf("file renamed succsessfully\n");
        }

fp1=fopen("test10.txt","r+");
for(;;){
        char *value=malloc(30);
        fscanf(fp1,"%s",value);
        
        if(feof(fp1)){
           
            break;
        }
        printf("%s\n",value);
        free(value);
    }

  
fclose(fp1);

}
/*
Задача 13.
Напишете програма, която да намери общия брой на 
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст. 
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да 
брои броя на редовете.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int count=0;
    int c;
    FILE *fp;
    fp=fopen("test10.txt","rt");
    while((c=fgetc(fp))!=EOF){
       if(c=='\n'){
           count++;
       }

    }
printf("Count of new line char %d",count);
fclose(fp);
return 0;
}   


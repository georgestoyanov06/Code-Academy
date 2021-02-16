/*Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.*/

void strcopy(char *from,char *to);
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char string1[]="hello world";
    char string2[]="hello there";
    char string4[12];
    char string3[12];
   
    strcopy(string1,string3);
    strcopy(string2,string4);
    printf("string3=%s\n",string3);
    printf("string4=%s\n",string4);

}

void strcopy(char *from,char *to){
    int i=strlen(from);
    from+=i;
    to+=i; 
    /*if(strlen(from)>strlen(to)){
        to=(char*)malloc(i*sizeof(char));
    }*/
    
    
   
    while(i-->=0){
        *to--=*from--;
    }
}
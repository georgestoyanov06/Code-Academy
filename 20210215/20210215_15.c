/*Направете същото, както в задача 14, но използвайки
готовата функция strcpy. Потърсете онлайн как работи*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[]="hello world";
    char string2[]="hello there";
    char string4[12];
    char string3[14];
    strcpy(string3,string1);
    strcpy(string4,string2);
    printf("%s\n%s\n",string4,string3);
}
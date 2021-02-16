/*Направете същото, както в задача 15., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[]="hello world";
    char string2[]="hello there";
    char string4[12];
    char string3[14];
    memset(string4,'\0',sizeof(string4));
    memset(string3,'\0',sizeof(string3));
    strcpy(string3,string1);
    strcpy(string4,string2);
    printf("%s\n%s\n",string4,string3);
    
}

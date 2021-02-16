#include <stdio.h>
void stringcopy(char *strfrom,char *strto);

int main(){
    char string1[]="hello world";
    char string2[]="hello there";
    char string4[12];
    char string3[14];
    stringcopy(string1,string4);
    stringcopy(string2,string3);
    printf("%s\n%s\n",string4,string3);
    return 0;
}
void stringcopy(char *strfrom,char *strto){
    while(*strfrom){
        *(strto++)=*(strfrom++);
       /* strfrom++;
        strto++;*/
    }
    *strto='\0';
}
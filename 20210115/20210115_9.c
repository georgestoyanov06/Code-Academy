#include <stdio.h>
#include <string.h>
int main(){
    char s[]="Hi there";
    int i=0;
    printf("Lenght of string is %d\n",strlen(s));
    while (s[i]!='\0'){
    printf("The %d is %c \n",i,s[i]);
    i++;
    }
}
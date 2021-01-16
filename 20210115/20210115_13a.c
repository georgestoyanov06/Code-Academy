#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char str[]="HELLO";
    int i;

    for(i=0;i<strlen(str);i++)
    {
printf("%c\n",tolower(str[i]));

    }
    }
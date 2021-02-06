#include <stdio.h>

void printStr(char *s);

int main(void){
char *a= "HELLO THERE";
printStr(a);
}

void printStr(char *s){
    int i;
    for(i=0;s[i]!='\0';i++){
        printf("s[%d] = %c\n",i,s[i]);
    }
}
/*Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .
*/
#include <stdio.h>
void strncpU(char s[],char t[],int n);

int main(){
    char *s="hello there !";
    char *t;
    strncpU(s,t,3);
    printf("%s",t);
}
void strncpU(char s[],char t[],int n){
    int i=0;
    for (;i<=n;i++){
        t[i]=s[i];
    }
    
}
/*Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/
#include <stdio.h>

void strncatT(char s[],char t[],int n);

int main(){
    char s[30]="hello our day is ";
    char *t="perfect but";
    strncatT(s,t,3);
    printf("%s",s);
}

void strncatT(char s[],char t[],int n){  
    int i=0;
    int j=0;
        for (i;j<=n;i++){
            if (s[i]=='\0'){
                for(j;j<=n;i++,j++){
                    s[i]=t[j];
                }
            }
        
        }
    s[i]='\0' ;
}
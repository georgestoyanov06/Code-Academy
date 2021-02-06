/*. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/
#include <stdio.h>
#include <string.h>
int strend(char s[],char t[]);

int main(){
    char *s="go home please";
    char *t="pleasee";
    printf("%d",strend(s,t));
}
int  strend(char s[],char t[]){
    int i=strlen(s)-strlen(t);
    int j=0;
    for(;s[i];i++,j++){
        if (s[i]!=t[j]){
            return 0;
        }
    
    }
    return 1;
}

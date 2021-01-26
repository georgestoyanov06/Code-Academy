#include<stdio.h>
int main(void){
    char c=;
    c=getchar();
    int count=0;
    while(c!=EOF){
        c=getchar();
        if(c=='\n')
        {
           count++;
        }
  
    }
    printf("%d lines",count);
}
#include<stdio.h>
#include<ctype.h>
int main(void){
    int c=0;
    while((c=getchar())!=EOF){
        if(c>='A'&& c<='Z'){
    
            c=tolower(c);
            putchar(c);
        }
        else{
            putchar(c);
        }
    }
}
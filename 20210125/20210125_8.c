#include <stdio.h>
#include<string.h>
int main(void){
    int c=0;
    while((c=getchar())!=EOF){

        if(c==' ' || c=='\t')
        {
            continue;
        }
        else{
        putchar(c);
        }
     
    }

}
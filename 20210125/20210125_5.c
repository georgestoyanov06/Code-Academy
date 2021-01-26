#include<stdio.h>
int main(){
    int c=0;
    while((c=getchar())!=EOF){
        if((c>='a' && c<='z')||(c>='A'&& c<='Z')){
         putchar(c);}
         else{

        continue;}

    }
}
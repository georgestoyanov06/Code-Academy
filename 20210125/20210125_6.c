#include<stdio.h>
int main(){
    int c=0;
    int countLetters=0;
    int countNumbers=0;
    
    while((c=getchar())!=EOF){
        if((c>='a' && c<='z')||(c>='A'&& c<='Z')){
            countLetters++;  
        }
        else if(c>='0' && c<='9'){
            countNumbers++;
        }
        else{
            continue;}
    }
    printf("\nLetters %d\nNumbers %d\n",countLetters,countNumbers);
}
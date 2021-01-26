#include<stdio.h>
int main(){
    int c=0;
    int countLines=0;
    int countSpace=0;
    int countTab=0;
    while((c=getchar())!=EOF){
        if(c =='\n'){
            countLines++;
        }
        else if(c == ' '){
            countSpace++;
        }
        else if(c == '\t'){
            countTab++;
        }

} printf("Lines %d\nSpaces %d\nTabs %d\n",countLines,countSpace,countTab);
}
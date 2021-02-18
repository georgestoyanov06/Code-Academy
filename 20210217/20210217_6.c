/*Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/
#include <stdio.h>

int main(){
    char str[]="This is a string to test my idea for search in a char and ....";
    char *pstr=str;
    int count=0;
    for(;*pstr;pstr++){
        if(*pstr=='a'){
            count++;
        }
    }
    printf("number of 'a' in the str is:%d",count );
}
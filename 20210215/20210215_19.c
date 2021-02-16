/*
 Дефинирайте стринг „I am a poor programmer”. Заменете през пойнтер “poor” с “great”.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char arr[]="I am a poor programmer";
    char arrsubs[]="great";
    char *ptrArr=arr;
    char *ptrSubs= arrsubs;
    while(*ptrArr++){
        if(*ptrArr == 'p'){
           
            while (*ptrSubs){
                *ptrArr = *ptrSubs;
                ptrArr++, ptrSubs++;
            }
             
            break;
        }
    }

    printf("%s\n", arr);

    return 0;
}

/*Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/
#include<stdio.h>

int main(){
    char str[] = "Baba, kaka, mama";
    char *pstr = str;

    while (*pstr++ != '\0'){
        if(*pstr == 'a'){
            *pstr = 'o';
        }
    }

    printf("%s\n", str);
    
    return 0;
}
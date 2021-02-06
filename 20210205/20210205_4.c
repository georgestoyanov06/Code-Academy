/*Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0*/
#include <stdio.h>
int our_strcmp(char *s,char *t);

int main(){
    char *s="HelLoThere";
    char *t="HelloThere";
    printf("%d",our_strcmp(s,t));

}
int our_strcmp(char *s,char *t){
    for(;*s;s++,t++){
        if (*s!=*t){
            if(*s<*t){
                return *s-*t;
            }
            else{
                return *s-*t;
            }
        }
    }
    return 0;
}
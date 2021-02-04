/*Направете функцията :
void copy(char *to, char *from), която копира една
последователност от символи в друга. Декларирайте масива,
който ще копирате така char *from = "abcdef" или така char from[]
= "abcdef" това е едно и също. Първото е пойнтер, сочещ към
низова константа, второто е началото на масив, сочещ към нея.
Заделете място за масива, в който ще копирате тези символи с
декларация
char to[16]; Копирайте символ по символ масива from[] в to[],
докато не стигнете знака '\0' терминираща нула – знак за край на
стринг. Терминиращият символ '\0' има стойност 0 */
#include <stdio.h>
void copy(char *to, char *from);
int main(){
    char from[]= "abcdef";
    char to[16];
    copy(to,from);
}

void copy(char *to, char *from){
    int i=0;
    for(i=0;from[i]!='\0';i++){
        to[i]=from[i];
        
    }
    printf("to= %s\n",to);
    printf("from= %s\n",from);
}
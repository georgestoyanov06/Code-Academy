/*Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx*/
#include <stdio.h>
#include <string.h>

void backWards(char *str);
void strBack(char *str);
int main(){
    void(*funPtr)(char*)=NULL;
    funPtr=strBack;
    char str[200];
    gets(str);
    /*backWards(str);*/
    funPtr(str);
    printf("%s\n",str);
    
}

void backWards(char *str){
    int i;
    i=strlen(str);
    for(;i>=0;){
        printf("%c",str[i]);
        i--;
    }

}
void strBack(char *str){
    char temp;
    int i=strlen(str)-1;
    for(;i>=0;i-=2){
        temp=*str;
        *str=*(str+i);
        *(str+i)=temp;
        str++;
    }
}
/*напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/
#include <string.h>
#include <stdio.h>
int any(char a[], char b[]);
int main(void){
    char a[20] ="12345678";
    char b[20] ="abc1abc";
    any(a,b);
}

int any(char a[], char b[]){
    int i;
    int n=0;
    for(i=0;a[i]!='\0';i++){
        for(n=0;b[n]='\0';n++){
            if(a[i]==b[n]){
                printf("s[%d]\n",i);
                break;
            }
        }
    }
}
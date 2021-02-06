#include <stdio.h>
/*Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/
#include <stdio.h>
void our_strcat(char *s, char *t);

int main(){
    char s[100]="lets make it count";
    char *t=" I will make it count";
    our_strcat(s,t);
    printf("%s",s);
}
void our_strcat(char *s, char *t){
    for (;*t;s++){
        if (*s=='\0'){
            for(*t;*t;t++,s++){
                *s=*t;
            }
        }
        
    }
  *s='\0' ;
}
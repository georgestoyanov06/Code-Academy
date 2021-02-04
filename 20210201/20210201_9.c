/*Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi).*/

#include <stdio.h>
#include <string.h>
void itoa(int a,char s[]){
    int i;
    
    
    do{
        s[i++]=a%10+'0';
        a/=10;
    }while(a>0);


}
void reverse(char* s){
    int i,j,temp;
    
        for (i=0,j=strlen(s)-1;i<j;i++,j--)
        {   
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
        }
}
int main(void){
    char s[50];
    itoa(123,s);
    reverse(s);
    printf("s=%s\n",s);
}
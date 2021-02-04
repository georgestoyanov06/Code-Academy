/*Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/
#include <stdio.h>
#include <string.h>

void reverse(char *s);
int main(){
    char s[]="HELLO";
    printf("%s\n",s);
    reverse(s);
    printf("%s",s);
   
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
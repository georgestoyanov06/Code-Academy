/*напишете функцията void lower(char s[]), която
преобразува главните букви в малки*/
#include <stdio.h>
char lower(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
            
        }
    printf("char s=%s\n",s);
    }
int main(){
    char s[]="AaBaCD";
    lower(s);

}
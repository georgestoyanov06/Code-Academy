/*напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include <stdio.h>
#include <string.h>
void squeeze(char s[]){
    int i;
    int n;
    for(i=n=0;s[i]!='\0';i++){
        if(s[i]!='c'){
            s[n]=s[i];
            n++;
            
            
        }
    printf("n=%d\n",n); 
    
    }
    s[n]='\0';
}
int main(void){
   
    char s[]="1c2c3c4c5c6c7c";
    printf("s=%s\n",s);
    squeeze(s);
    printf("%s",s);
}
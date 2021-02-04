#include <stdio.h>
#include<string.h>
int main(void){
    int c=0;
    int i=0;
    char str[200];
    while((c=getchar())!=EOF){
        str[i]=c;
        string[i+1];
        i++;
        putchar(c);
    
    }
    strrev(str);
    for(i=0;i>0;i++)
    {
        if(str[i]==' '|| str[i]=='\t'){
        str[i]='\0';
        }
    continue;
    }
    strrev(str);
    printf("output %s\n",str);
}
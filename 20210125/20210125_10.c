#include<stdio.h>
#include<string.h>
void reverse(char s[]);
int main(){
int c;
int i=0;
char s[200];
while((c=getchar())!=EOF){
    s[i]=c;
    i++;
    if(c=='\n'){
        i=0;
       reverse(s); 
    }
     
    
}

}

void reverse(char s[]){
    int i,p;
    p=strlen(s)-1;
    char rts1[p];
    for(i=0;i<strlen(s);i++){
        rts1[p]=s[i];
        p--;
        printf("%s\n",rts1);
        }
    

    
}
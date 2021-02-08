#include <stdio.h>
void* my_strcpy(char *t,char *s);

int main(){
    char *t="Hello1234567 9";
    char *s;
    my_strcpy(t,s);
    printf("s= %s\n",s);
    printf("t= %s\n",t);

    }

void*  my_strcpy(char *t,char *s){
    for(;*s!='\0';t++,s++){
        *s=*t;
        
    }
    return s;
    
}

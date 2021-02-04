#include<stdio.h>
#include<string.h>
int main(void){
    int a;
    int count=0;
    char str[155]="";
   while((a=getchar())!=EOF){
       
       str[count]=a;
       str[count+1]='\0';
       count++;
       if(a == '\n' && a>8){
          
           printf("%s",str);
           count=0;
           str[155]='\0';
           
           }

       else if( a == '\n'){  
           count=0;
           str[155]='\0';
        
       }
   }
}
        
       
    
    
 
 
 
/*Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

#include <stdio.h>
#include <string.h>
void itob(int n,char *s,int b);
void reverse(char* s);
void itoa(int a,char *s);

int main(){
   
    char s[50];
    itoa(123,s);
    reverse(s);
    printf("itoa s=%s\n",s);
    
 }
void itob(int n,char *s,int b){
    
     char *m="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";
     /*printf("%c\n",*(m+((n/b)%b)));*/
     *s=*(m+1);
     printf("%c\n",*s);
     for(n; n<0 ; s++ ){
    
       *s = *(m+(n%b));
       
        n/=b;

       
    }    
    reverse(s);
    printf("itoB =  %s\n",s);
};
void reverse(char* s){
    
    int length, c;
    char *begin, *end, temp;
 
    length = strlen(s);
    begin  = s;
    end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
        }
 }
 void itoa(int a,char *s){
    int i;
    
    
    do{
        *(s++)=a%10+'0';
        a/=10;
    }while(a>0);}
/*Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

#include <stdio.h>
#include <string.h>
void itob(int n,char *s,int b);
void reverse(char* s);
void itoa(int a,char *s);
int atof(char *s);

int main(){
   
    char s[]="-1a1ea43323D2adaav233dadaa.12aaa33d1ecca3";
   atof(s);
    
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
int atof(char *s){
    double n;
    double power=1.0;
    int i=0;
    n=0.0;
    if(*s=='-'){
       *(s+=1);
    }
    for (;*s>='0' && *s<='9';s++){
        n=10.0*n +(*s-'0');
        
            while((*(s+1)>='a' && *(s+1)<='z')||*(s+1)>='A'&& *(s+1)<='Z'&&*(s+1)!='.'){
                s++;
        
            
        }   
    }
    
    
    if(*s=='.'){
            s++;}
    for(power=1.0;*s>='0' && *s<='9';s++) {
                n=10.0*n+(*s-'0');
                power=power*10;
                
                    while((*(s+1)>='a' && *(s+1)<='z') || (*(s+1))>='A' && (*(s+1)) <='Z'){
                     s++   ;
        
      
           }   
              }
    if(*s=='-'){
        n=n*(-1);
    }
    printf("power %f\n",power);
    printf("to float %lf \n",n/power);
}
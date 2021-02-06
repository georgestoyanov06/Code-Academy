/*Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

#include <stdio.h>
#include <string.h>
void itob(int n,char *s,int b);
void reverse(char* s);
int main(){
    int n;
    int b;
    char *s;
    char isNegative = 0;
    printf("Enter a whole number: ");
    scanf("%d", &n);
    if (n < 0) {
        isNegative = 1;
        n = -n;
    }
    printf("\nEnter a base for conversion: ");
    scanf("%d", &b);
    while (b < 2 || b > 64) {
        printf("\nEnter a valid base for conversion (between 2 and 64): ");
        scanf("%d", &b);
    }
    itob(n,s,b);
    
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
#include <stdio.h>
#include <string.h>
/* *
 * Напишете функция void itob(int n, char s[], int b), 
 * която преобразува цяло число n в низ s базиран на основа b. 
 * Например itob( n, s[], 16) представя числото n като шеснадесетично число в стринга s[].
 * */
void itob();
int main(void){
    int n;
    int b;
    char s[64]="";
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
 void itob(int n,char s[],int b){
     int i=0;
     int c=0;
     char m[64]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";
     do{
       i=n%b;
       n/=b;
       s[c]=m[i];
       c++;
       
    }    
    while(n>0);
    while (c-- > 0) {
        printf("%c", s[c]); }
 }
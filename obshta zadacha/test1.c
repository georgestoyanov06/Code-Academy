#include <stdio.h>
#include <string.h>

int main(void){
    int a;
    int b;
    int i=0;
    int c=0;
    char revS[64];
    char s[64]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";
    printf("Enter a whole number: ");
    scanf("%d", &a);
    printf("\nEnter a base for conversion: ");
    scanf("%d", &b);
    do{
       i=a%b;
       a/=b;
    revS[c]=s[i];
    c++;


    }
    while(a>0);
    strrev(revS);
    printf("%s",revS);
    return 0;
 }

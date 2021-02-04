#include <stdio.h>
#include <string.h>

int main(void){
   char str[]="123 123 123 123 123 123 123 123 123";
   char rts[1000]="";
   int i;
   int p=strlen(str)-1;
   printf("p=%d\n",p);
   for(i=0;i<(p+strlen(str));i++)
   {
       rts[p]=str[i];
        p--;
        
   }
    printf("%s\n",rts);
    printf("%s\n",str);
return 0; 
}
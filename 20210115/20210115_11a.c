#include <stdio.h>


int main(void){
   char str[]="hello\0";
   char rts[]="     ";
   int i;
   int p=4;

   for(i=0;i<5;i++)
   {
       rts[p]=str[i];
        p--;
        
   }
    printf("%s\n",rts);
 printf("%s\n",str);
return 0; 
}
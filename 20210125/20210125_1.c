#include<stdio.h>
int main(void){
    int a;
    a=getchar();
    int count=0;
   while(a!=EOF){
       
       a=getchar();
       ++count;
 }
   printf("%d",count);

}
#include<stdio.h>
int main(void){
    int a=1;
    int b=200;
    int rez=0;
    while(a<=b)
    {
          rez=a+rez;

      a++;
      
    

    }
    printf("%d",rez);
}
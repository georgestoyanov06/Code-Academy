 /*Напишете функция, която връща резултат a*2 + b*c*/
#include <stdio.h>
int fun();
int main(void){
    fun();

}
int fun(){
    int a,b,c;
    printf("type 3 nubmers \n ");
    scanf("%d %d %d",&a,&b,&c);
    printf("a*2 + b*c= %d",a*2+b*c);
    
}
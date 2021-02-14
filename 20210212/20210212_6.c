/*Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.

използвам scanf(" %c") вместо getchar,тъйкато получавам някакъв бъг и минава два пъти през цикъла
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *buffer;
    unsigned uSize=2;
    char symbol;
    int i;
    unsigned uSizeInc=0;
    buffer=(char *)malloc(uSize*sizeof(char));
    for(i=0;1;i++){
         
         scanf(" %c",&symbol);
         
         buffer[i]=symbol;
        
        if(i==uSize-1){
            
            printf("You have to add more memory\n");
            scanf(" %d",&uSizeInc);
            uSize+=uSizeInc;
            buffer=realloc(buffer,uSize*sizeof(char));
            
        }
        if(i>10){
           i++;
           buffer[i]='\0';
           break;
       }
    }
for(i=0;buffer[i]!='\0';i++){
    printf("%c",buffer[i]);
}
free(buffer);
}
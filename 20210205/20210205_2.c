/*Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията*/
#include <stdio.h>
size_t my_strlen(char *s);

int main(){
    char *s="HelloThere";
    printf("strlen=%d",my_strlen(s));
}
size_t my_strlen(char *s){
    size_t len=0;
    for(len=0;*(s++)!='\0';len++)
        ; 
    
    return len;
}
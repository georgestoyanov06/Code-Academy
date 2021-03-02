/*Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.*/

#include <stdio.h>
#include <stdlib.h>
#define SIZEOFSTR 255

typedef struct{
    char p[SIZEOFSTR];
    int a;
}key_t;


int main(){
    key_t *key_tab=(key_t*)malloc(100*sizeof(key_t));


    
    free(key_tab);
}

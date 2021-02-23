/*Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/
#include <string.h>
#include <stdio.h>

union test{
    int var;
    int var1;
    char var2[24];
};


int main(){
    union test test1;
    test1.var=-10;
    printf("var=%d\n",test1.var);
    test1.var1=7;
    printf("var1=%d\n",test1.var1);
    strcpy(test1.var2,"hellothere");
    printf("var2=%s\n",test1.var2);

    union test test2;
    test2.var=-10;
    test2.var1=7;
    strcpy(test2.var2,"hellothere");
    printf("var=%d\n",test2.var);
    printf("var=%d\n",test2.var1);
    printf("var=%s\n",test2.var2);
}
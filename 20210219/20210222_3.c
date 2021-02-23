/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
*/

#include <stdio.h>
#include <string.h>

struct production{
    int quant;
    char type[64];
    float price;

};

int main(){

    struct production chocolate;

    chocolate.quant=250;
    strcpy(chocolate.type,"dark chocolate");
    chocolate.price=2.5;
    printf("chocolate quantity:%d\nchocolate type :%s\nchocolate price :%0.2f",chocolate.quant,chocolate.type,chocolate.price);
}
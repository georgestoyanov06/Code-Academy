/*Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? Какво представлява името на масива? Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях?*/
#include <stdio.h>
int main(){
    int c[10]={2,323,33232,33,344,355,3553,21118,9,10};

    int *cP=NULL;
    *cP=c;
    printf("%d\n",*(cP+2));
    printf("%p\n",&cP);
}
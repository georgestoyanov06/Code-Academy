/*Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).*/

#include <stdio.h>
int main(){
    /*int num=34;
    int *ptrnum=&num;*/
    int *ptrnum=NULL;
    int num=34;
    ptrnum=&num;
    printf("%d",*ptrnum);
}
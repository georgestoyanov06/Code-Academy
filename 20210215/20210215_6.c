/*Дефинирайте променлива „а“, дeфинирайте пойнтер към нея, присвоете му адреса на променливата.
 През пойнтера задайте нова стойност = 5 на променливата „а“. Каква е стойността на “а”?
*/
#include <stdio.h>

int main(){
    int a=0;
    int *ptra=&a;
    *ptra=5;
    printf("%d",a);
}
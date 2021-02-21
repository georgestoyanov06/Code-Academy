/* Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct  point
{  int a; int b;

};

float distanceBetween(struct point X,struct point Y){
    int a=X.a-Y.a;
    int b=X.b -Y.b;
    return sqrt(pow(a,2)+pow(b,2));
}

int main(){
    struct point X={9,7};
    struct point Y={3,2};
    printf("%lf",distanceBetween(X,Y));

}
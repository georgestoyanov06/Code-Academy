/*Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/

#include <stdio.h>
struct  point
{  int x; int y;

};

struct rect
{
    struct point A;
    struct point B;

};
struct point makePoint(int x, int y){
    struct point newPoint = {x, y};
    return newPoint;  
};
int main(){
    struct rect p1;
    struct rect p2;
    p1.A=makePoint(0,0);
    p2.B=makePoint(15,15);

    for (int i = p1.A.y; i <= p2.B.y; i++)
    {
        for (int j = p1.A.x; j <= p2.B.x; j++)
        {
            printf("- ");
        }
        printf("\n");
    }
}


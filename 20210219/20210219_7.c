/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct point{
    int x; int y;
};

struct point makePoint(int x, int y){
    struct point newPoint = {x, y};
    newPoint.x=rand()% 150;
    newPoint.y=rand()% 150;
    return newPoint;  
};
int main(){
    srand(time(NULL));
    int p1,p2;
    struct point A = makePoint(p1,p2);
    printf("Point A %d %d",A.x,A.y);
    
}
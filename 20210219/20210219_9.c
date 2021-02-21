/*Задача 9. Направете функця add(), която събира две точки.*/   

#include <stdio.h>
struct  point
{  int x; int y;

};
struct point add(struct point first, struct point second){
    struct point newPoint;
    newPoint.x = first.x + second.x;
    newPoint.y = first.y + second.y;

    return newPoint;
};

int main(){
    struct point a={10,15};
    struct point b={1,6};
    struct point new=add(a,b);
    printf("new points new: x=%d  y=%d ",new.x,new.y);
}
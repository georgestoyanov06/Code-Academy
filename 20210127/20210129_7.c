/*Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.*/
#include <stdio.h>

float areaOfTriangle();
float areOfRectangle();
int main(void){
    printf("area of the triangle is =%f\n",areaOfTriangle());
    areOfRectangle();
}
float areaOfTriangle(){
    float width,height;
    printf("Type two numbers for width and height of triangle\n");
    scanf("%f %f",&width,&height);
    return (width*height)/2;
}
float areOfRectangle(){
    printf("Are of the rectangle is %f",areaOfTriangle()*2);
}
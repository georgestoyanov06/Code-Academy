/*Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата:*/
#include<stdio.h>
extern float g_PI;

float area(float r)
{
    return g_PI*r*r;
}
float areaOfCircle();

int main(void){
    
    printf("Circle size=%f",areaOfCircle());
    return 0;    
}
float g_PI=3.14;
float areaOfCircle(){
    float r;
   scanf("%f",&r);
   return area(r);
}
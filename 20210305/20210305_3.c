/* Задача 3.
С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.
Потребителски типове упражнение. */

#include <stdio.h>
#include <stdlib.h>
float hijaVihren=1950;

float funTemp1(float *height){
    float temp1;
    printf("Temperature at hut Vihren\n");
    scanf(" %f",&temp1);
    float temp=temp1-(*height-hijaVihren)*0.005;
    return temp;
}

float funTemp2(float *height1){
    float temp2;
     printf("Temperature at peak Vihren\n");
    scanf(" %f",&temp2);
    float temp=temp2+(*height1- hijaVihren)*0.005;
    return temp;
}

int main(){
   /* printf("%0.2f\n",funTemp1(2918));*/
    float *heightVihren=malloc(sizeof(hijaVihren));
    *heightVihren=2918;
    printf("Temperature at hut Vihren :%0.2f\n",funTemp2(heightVihren));
    printf("Temperature at peak Vihren :%0.2f\n",funTemp1(heightVihren));
    free(heightVihren);
}
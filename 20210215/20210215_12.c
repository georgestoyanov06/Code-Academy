/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int arr[10][10][10];
    int *ptrarr=(int*)arr;
    srand(time(NULL));
    float average=0.0;
    int i,sum=0;
    for(i=0;i<1000; i++){
        *(ptrarr+i)= rand()%100+1;
        printf("ptrarr=%d\n",*(ptrarr+i));
        printf("i=%d\n",i);
        sum+=*(ptrarr+i);
        printf("sum=%d\n",sum);
        
    }
    average=(float)sum/8;
    printf("average=%f",average);
}
/*Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.*/

#include <stdio.h>
#define SIZE 1000
int main(){
        
       int arr[SIZE];
       int i, b, temp;
       int count;
       
       
       scanf(" %d", &count);
       for(i=0; i<count; i++) {
            scanf(" %d", &arr[i]);
       }
       
       for(i=0; i<count; i++){
            for(b=count-1; b>i; b--){
               
               if(arr[b-1] > arr[b]){
                       temp = arr[b-1];
                       arr[b-1] = arr[b];
                       arr[b] = temp;
               }
       }
       }
       
       for(temp=0; temp<count; temp++) 
         printf("the number is %d\n", arr[temp]);
       return 0;
}
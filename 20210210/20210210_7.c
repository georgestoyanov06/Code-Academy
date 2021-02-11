/*Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.*/
#include <stdio.h>

void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}
int main(){
   int i;
   int a[10]={23,91,36,4,9,99,87,11,2,33};
   quicksort(a,0,10-1);
   printf("Order of Sorted elements: ");
   for(i=0;i<10;i++)
      printf(" %d",a[i]);

   return 0;
}
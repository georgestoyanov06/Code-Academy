/*Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float */
#include <stdio.h>
double average(int array[],int N);
int main(){
    
    int array[]={13,23,32,4,54,62,37};
    int N=sizeof(array)/sizeof(array[0]);
    printf("%lf",average(array, N));

}

double average(int array[],int N){
    
    double average=0;
    for(int i=0;i<N;i++){
        average+=array[i];
      }

    return average/N; 

}
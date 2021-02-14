/*Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/

#include <stdio.h>
#include <stdlib.h>
int callCalloc(int *arr,int size);
int main(){
    int *ARR;
    unsigned uSize=0;
    printf("enter number of elements\n");
    scanf(" %d",&uSize);

    callCalloc(ARR,uSize);
    
        

    
    free(ARR);
}
int callCalloc(int *arr,int size){
    
    arr=(int*)calloc(size, sizeof(int));
    for(int i=0;i<size;i++){
        printf("enter numbers\n",i);
        scanf(" %d",&arr[i]);
                }
}
/*Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/

#include <stdio.h>
#include <stdlib.h>

int funRealloc(int *ARR);

int main(){
    unsigned uSize=0;
    int *arr;
    printf("Eneter how many elemets you need \n");
    scanf(" %d",&uSize);
    arr=(int*)calloc(uSize,sizeof(int));
    if(arr== NULL){
        printf("allocation memory error!\n");
    }
    else{
        printf("adresses of reallocated memory : %p\n", arr);
    }

    funRealloc(arr);
    free(arr);
}
int funRealloc(int *ARR){
    unsigned newSize=0;
    printf("Enter new size\n");
    scanf(" %d",&newSize);
    ARR= realloc(ARR,newSize*sizeof(int));
    if(ARR== NULL){
        printf("allocation memory error!\n");
    }
    else{
        printf("adresses of reallocated memory : %p\n", ARR);
    }


}
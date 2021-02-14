/*Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* value = NULL;
    unsigned valueSize = 0 ;
    printf("\n Enter size: \n");
    scanf("%u",&valueSize);
    value=(int*)malloc(valueSize*sizeof(int));
    if(NULL==value){
        printf("allocation memory error!\n");
        exit(1);
    }
    else{
        for(int i=0; i<valueSize;i++){
           printf("enter elemet %d: ",i);
           scanf(" %d", (value+i));
        }

    free(value);
    }
}

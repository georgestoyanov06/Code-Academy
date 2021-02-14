/*3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмат*/
#include <stdio.h>
#include <stdlib.h>

int funDin(int *value,int uSize);
int funRealloc(int *valueAlloc,int NewuSize );
void funFree(int *freeValue);

int main(){
    int uSize=3;
    int *piValue=NULL;

    funDin(piValue,uSize);
    uSize=4;

    funRealloc(piValue,uSize);

    funFree(piValue);


    
}

int funDin(int *value,int uSize){
    value=(int*)malloc(uSize*sizeof(int));
    if(NULL==value){
        printf("allocation memory error!\n");
        exit(1);
    }
    else{
        for(int i=0; i<uSize;i++){
           printf("enter elemet %d: ",i);
           scanf(" %d", (value+i));
        }
        printf("adresses of reallocated memory : %p\n", value);
    }
}
int funRealloc(int*valueAlloc,int uSize ){
    
    valueAlloc=realloc(valueAlloc,uSize*sizeof(int));
    printf("adresses of reallocated memory : %p", valueAlloc);
    
}

void funFree(int *freeValue){
    free(freeValue);
}
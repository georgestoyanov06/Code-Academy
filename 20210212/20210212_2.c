#include <stdio.h>
#include <stdlib.h>

int main(){
    int* piValue = NULL;
    unsigned uSize = 0 ;
    int sum=0;
    printf("\n Enter size: ");
    scanf("%u",&uSize);
    piValue=(int*) malloc(uSize*sizeof(int));
    if(NULL==piValue){
        printf("allocation memory error!\n");
        exit(1);
    }
    else{
        for(int i=0; i<uSize;i++){
           printf("enter elemet %d: ",i);
           scanf(" %d", (piValue+i));
        }

    }
    for(int i=0; i<uSize;i++){
            sum+=*(piValue+i);

}
printf("adresses of llocated memory : %u\n", piValue);
printf("sum =%d\n",sum);
printf("enter the size : \n");
scanf("%u",&uSize);
piValue=realloc(piValue,uSize*sizeof(int));
if(NULL == piValue)
{
    printf("reallocation memory error!\n");
    exit(2);
}

printf("adresses of reallocated memory : %u", piValue);
free(piValue);
return 0 ;
}
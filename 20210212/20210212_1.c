#include <stdio.h>
#include <stdlib.h>

int main(){
 int* p;
 int  num,i,sum,pVal;
 printf("enter number of elements\n");
 scanf("%d",&num);
 p=(int*)malloc(num*sizeof(int));
 if (p==NULL){
     printf("error");
 }
    else{
        for (i=0;i<num;i++){
            scanf(" %d",&p[i]);
            
        }
    }
    for(i=0;i<num;i++){
         sum+=p[i];
    }
    printf("%d",sum);
    free(p);
    }
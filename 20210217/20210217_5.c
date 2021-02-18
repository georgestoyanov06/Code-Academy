#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int arr[5][5];
    int i,j;
    srand(time(NULL));
    for(i=0,j=0;i<5;i++){
        for(j=0;j<5;j++){
            arr[i][j]=rand() % 10+1;
            
        }
    }
   
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j] >=1 && arr[i][j]<=5)
            {
                printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
            }

        }
    }
    
}
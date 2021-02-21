/*Задача 6. Направете по подобен начин триъгълник:*/

#include <stdio.h>


#define BoardSize 15
void fillBoard(char arr[][BoardSize]){
    int j,i;
    for ( i = 0;i<BoardSize;i++){
        for(j=0;j<BoardSize;j++){
            arr[i][j]='-';
        }
    }
};
void print(char array[][BoardSize])
{
    for (int i = 0; i < BoardSize; i++)
    {
        for (int j = 0; j < BoardSize; j++)
        {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
};
struct  points
{
    int point1;
    int point2;
};

int main(){
    int i,j;
    int count=0;
    char board[BoardSize][BoardSize]={'-'};
    fillBoard(board);
   
    struct points p1 ={6,3};
    struct points p2 ={8,9};
    int c=p2.point2-p1.point2;
    for (i=p1.point1;i<=p2.point1;i++){
        for(j=p1.point2-count;j<=p2.point2+count-c;j++){
            board[i][j]='@';
        }
        count++;
    }
    print(board);
    
}
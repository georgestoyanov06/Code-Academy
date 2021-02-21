/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/
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
    char board[BoardSize][BoardSize]={'-'};
    fillBoard(board);
   
    struct points p1 ={3,4};
    struct points p2 ={7,10};
    for (i=p1.point1;i<p2.point1;i++){
        for(j=p1.point2;j<p2.point2;j++){
            board[i][j]='@';
        }
    }
    print(board);
    
}
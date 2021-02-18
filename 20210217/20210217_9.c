/*Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция.*/
#include <stdio.h>
int main()
{
    int matrix[2][2][5];
    int i, j, k;

    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            for (k = 0; k < 2; ++k){
                scanf(" %d", &matrix[i][j][k]);
            }
               

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            for (k = 0; k < 2; k++)
                printf("%d ", matrix[i][j][k]);

    return 0;
}
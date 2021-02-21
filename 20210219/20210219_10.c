/*Задача 10. Направете два триъгълника с отместване.*/

#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};
int main()
{
    struct point a = {3, 4};
    struct point b = {8, 9};

    int hight = b.y - a.y;
    int lenght = b.x - a.x;

    int i, j;
    for (i = 0; i < hight; i++)
    {
        for (j = 0; j < lenght; j++)
        {
            if (j < hight - i)
            {
                printf("- ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 0; j < lenght - i; j++)
        {
            printf("- ");
        }
        printf("\n");
    }

    return 0;
}
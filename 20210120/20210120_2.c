#include <stdio.h>
int main(void){
    char i ;
    printf("Press 1 to see messge hello\nPress 2 to see Poem \nPress 3 to see hidden mesge \n");
    scanf("%c",&i);
    switch (i)
    {
        case '1':
            printf("Hello");
            break;
        case '2':
            printf("Poem");
            break;
        case '3':
            printf("hidden message");
            break;
    }
     
}
#include <stdio.h>
int main(){
    int i=0;
    printf("Press 1 to see messge hello\nPress 2 to see Poem \nPress 3 to see hidden mesge \n");
   
    while(i<4)
    {
         scanf("%d",&i);
        switch (i)
    {
            case 1:
                printf("Hello\n");
                 break;
            case 2:
                printf("Poem\n");
                  break;
            case 3:
                printf("hidden message\n");
                    break;
                

    }
    
    }
    return 0;
}
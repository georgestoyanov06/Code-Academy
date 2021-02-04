#include<stdio.h>
int main(){
    char i;
    printf("Press 1 to see messge hello\nPress 2 to see Poem \nPress 3 to see hidden mesge \n");
    scanf("%c",&i);
    if (i=='1'){
        printf("Hello");
    }
    else if (i=='2'){
        printf("Poem");
    }
    else if(i=='3'){
        printf("hidden mesage");
    }
    else{
        printf("nevaliden kod");
 }
}
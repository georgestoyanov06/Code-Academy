#include <stdio.h>
int main(void){
    int x = 10;
    int y = 10;
    int z = 30;
    int true = x==y+(z < y)!=20; /*първо е приоритетът на скобите  ляво дясно*/
    printf("True = %d",true);
}

#include <stdio.h>
int main(void){
    long long int A=1;
    char i;
    
    for (i=1;i<4;i++) {
        A ^= A << 10;
        printf("A=%d\n",A);
        A ^= A >> 13;
         printf("A=%d\n",A);
        A ^= A << 6;
         printf("A=%d\n",A);
    }
}
#include <stdio.h>
int main() {
    int number;

    float temp, sqrt;

    printf("Provide the number: \n");

    scanf("%d", &number);
    sqrt = number / 2;
    temp=0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
        printf("sqrt%f",sqrt);
    }
printf("The square root of '%d' is '%f'", number, sqrt);
}
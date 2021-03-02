#include <stdio.h>

int main(){
    typedef int t_arr[2][2];
    t_arr iArr={{1,2},{3,4}};
    printf("iArr=%d",iArr[1][1]);

    return 0;
}
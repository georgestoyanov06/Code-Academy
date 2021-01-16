#include <stdio.h>
const double PI=3.14159;
double lice();
 static float R;

int main(void){
    R=1;
    lice();
    R=1.5;
    lice();
    R=13;
    lice();
    return 0;
}
double lice(){ 
    double lice =PI*R*R;
    printf("%lf\n",lice);

}
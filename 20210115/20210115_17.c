#include <stdio.h>
const double PI=3.14159;
double lice();
double elipsaLice();
static float R,a,b;

int main(void){
    R=1;
    lice();
    R=1.5;
    lice();
    R=13;
    lice();
 a=1.5;
 b=2.3;   
    elipsaLice();

    return 0;
}
double lice(){ 
    double lice =PI*R*R;
    printf("%lf\n",lice);

}
double elipsaLice()
{
    double elipsaLice=PI*a*b;
    printf("%llf\n",elipsaLice);
}
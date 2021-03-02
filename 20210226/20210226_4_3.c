#include <stdio.h>
typedef int(*t_funT)(int,int);
int funT( int a,int b){
    return (a+b);
};



int main(){
    
    
    
    t_funT ptrSTH=NULL;
    ptrSTH=funT;
    printf("%lld\n",ptrSTH(255,55));
}
#include <stdio.h>
extern int a;

void test()
{       
         a++;
        printf("%d\n",a);

}
   

    int main(){
        test();
        test();
        test();
        
    }
    
    
    int a=10;

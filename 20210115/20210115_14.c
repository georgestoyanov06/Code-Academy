#include <stdio.h>
extern int g_a;

void g_test()
{       
       static a++;
        printf("%d\n",a);

}
   

    int main(){
        g_test();
        g_test();
        g_test();
        
    }
    
    
    int g_a=10;

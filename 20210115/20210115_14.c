#include <stdio.h>
extern int a;

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
    
    
    int a=10;

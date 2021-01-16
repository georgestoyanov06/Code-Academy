#include <stdio.h>
extern int a;

void test()
{       
       static int a;
       a++;
        printf("%d\n",a);

}
int main(void){
        test();
        test();
        test();
        
   
    {
        test();
    }
   
    return 0;
}
    
    int a=10;
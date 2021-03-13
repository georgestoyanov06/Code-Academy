#include "20210312_1.h"

extern node* start;


int main(){
        init();
        add(1);
        add(8);

        for(int i=5;i<22;i++){
            add(i);
        }

        printlist();    

        int delTest;

        dellFirst(&delTest);

       
        printf("delTest =%d\n",delTest);/*first deleted element*/
        
        printlist();

    return 0;
}

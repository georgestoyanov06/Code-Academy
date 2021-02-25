#include <stdio.h>
/*#define DEBUG */
void debugMsg(const char *pszMsg){
    #ifdef DEBUG
        printf("DEBUG %s\n",pszMsg);
    #endif    

}

int main(){
    
    debugMsg("hello there");

    return 0;
}
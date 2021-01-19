#include <stdio.h>
int main(){
    int nResult = 114; 
    int nX = 10;
    int nY=40;
    printf("Result = %d  nY= %d \n", nResult, nY);
    nResult=nY;/*nResult prisvoqva stoinosta na nY*/
    printf("Result = %d\n",nResult);
    nX+=10;/* pribavqme 10 kum nX*/
    printf("nX= %d\n",nX);
    nResult += nX; 
    printf("Result += %d -> %d\n", nX, nResult);
    nResult = 10;/*davame nova stoinost na nResult*/
    nX=1;
    nResult <<=nX++; /*po tozi nachin s predimstvo e inkrementiraneto (lqvo dqsno) shiftirame nResult << 1 i chak sled tova nX uvelichavame s 1 v printf nx =2 , n result 20 */
    printf("Result <<= %d -> %d\n", nX, nResult);
}

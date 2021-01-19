#include <stdio.h>
int main(){
    int nA=1;
    printf("vuvedete chislo\n");
    scanf("%d",&nA);
    int nB=(nA == 2 ? 2 : 0 );/*pri nA=2 nB=2 pri vsqka druga stoinost na nA , nB=0*/
    printf("A value is %d\n", nA); printf("B value is %d\n", nB);
    
}

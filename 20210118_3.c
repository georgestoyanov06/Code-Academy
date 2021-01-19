#include <stdio.h>
int main(void){
    int x=10;
    int y=10;
    int true,false;
    true =++x + x||y; /*pri tezi stoinosti na chislata vinagi shte ni dava true, osven ako y=0 x<=-1 togava true=0 */
    printf("true = %d", true);
 }
 

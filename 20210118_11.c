#include <stdio.h>
int main() {
    int iCounter = 2;
while( ++ iCounter < 4) {
    printf("Counter %d\n", iCounter); 
    printf("++ Counter: %d\n", ++ iCounter);
    printf("-- Counter: %d\n", -- iCounter);
    printf("Counter ++: %d\n", iCounter ++);
    printf("Counter --: %d\n", iCounter --);
    
} /*ако броячът ни се препълни функцията спира, но ни увеличава iCounter с 1  */
printf("Counter=%d",iCounter);
return 0;

}

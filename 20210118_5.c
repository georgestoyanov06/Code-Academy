#include <stdio.h>
int main(void){
    int x = 1, y = 0;
    int z = y || x;
    printf("\nInit values: X= %d, Y= %d\n", x, y);
    printf("z=%d",z);
    x = 1 + 2, 2 * 3, 3 + 4;/*дясно ляво, х първо е 7 ,след това 6 и накрая х=3 */
    y = ( 7 * 8, 8 + 9, 9 - 4);/*приоритет имат скобите затова взимаме последната стойност */
    printf("\nX= %d, Y= %d\n", x, y);
return 0;
}

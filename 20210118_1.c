#include <stdio.h>
int main(void){
    int x = 10;
    int y = 10;
    int true, false;
    true= x == y; /* това ни е true, тъйкато сравняваме съответно 10 дали е равно на 10 */
    false = x != y; /* това ни дава false, тъйкато се пита дали х е различни от y   */
    printf("true = %d\n",true);
    printf("false = %d ", false);
    return 0;
}
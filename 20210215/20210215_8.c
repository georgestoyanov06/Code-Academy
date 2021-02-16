/*Дефинирайте и инициализирайте променлива и пойнтер към нея.
 Отпечатайте адреса на пойнтера с %p с printf.
*/

#include <stdio.h>

int main(){
    int b=20;
    int *ptrb=&b;
    printf("b=%p\n",&b);
    printf("ptrb=%p",ptrb);
    return 0;
}
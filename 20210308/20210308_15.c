/*Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/
#include <stdio.h>

 int main()
 {
    
    int c;
    FILE *fp;
    fprintf(stdin, "\n Input a filename: ");
 
    fp= fopen(test18.xml, "rb");
    fseek(fp, 0L, SEEK_END);
    fseek(fp, -1L, SEEK_CUR);
    while (ftell(fp)> 0)
    {
        c = fgetc(fp);

        putchar(c);
        fseek(fp, -2L, SEEK_CUR);
 }

 } 
    
/*Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква*/
#include <stdio.h>

void count(char *str, int *arr);
void printAlphabetArray(int array[]);


int main()
{
    int alphabet[26] = {0};
    char string[] = "hello ";
    count(string, alphabet);
    
    for (int i = 0; i < 26; i++)
    {
        printf("Letter %c is found %d times in the str\n", (i + 'a'), alphabet[i]);
    }

    
}


void count(char *str, int *arr)
{
    int position = 0;
    while (*str++ != '\0')
    {
       
            position =((*str - 'a')+0);
            arr[position]++;
        
        
    }
}

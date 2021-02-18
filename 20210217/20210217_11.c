/*Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

static char smallSym[26]="abcdefghijklmnopqrstuvwxyz";
static char specialSym[7]="@#$!^&*";
static char bigSym[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static char num[10]="0123456789";

void shuffle(char *sBuff);
int funSizeOfPass(int *size,int n){
    *size-=n;
    printf("you have another %d chars to add\n",*size);
}
int funPass(int size);

int main(){
    
    int size;
    srand(time(NULL));
    printf("password size from 6 to 12\n");
    scanf(" %d",&size);
    funPass(size);

}
void shuffle(char *sBuff){
    int i, random, length = strlen(sBuff);
    char temp;

    for (i = length-1; i > 0; i--)
    {
        random = rand()%(i+1);
        temp = sBuff[random];
        sBuff[random] = sBuff[i];
        sBuff[i] = temp;
    }

}
int funPass(int size){
    int i,n,p=0;
    char pass[size];
    printf("how many small letters do you want? \n");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
       pass[p]=smallSym[rand()%26];
        p++;
    }
    funSizeOfPass(&size,n);
    printf("how many special Symbols do you want? \n");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        pass[p]=specialSym[rand()%8];
        p++;
    }
     funSizeOfPass(&size,n);
     printf("how many big Letters do you want? \n");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        pass[p]=bigSym[rand()%26];
        p++;
    }
    funSizeOfPass(&size,n);
    printf("how many big numbers do you want? \n");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        pass[p]=num[rand()%10];
        p++;
    }
    pass[p]='\0';
    shuffle(pass);
    printf("Your password is : %s\n",pass);
}
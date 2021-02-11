/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.

int linSearch(int a[], int l, int d);
int main(void){
    int a[13]={20,10,30,2,3,4,1,1222,231,13,213,5,923};
   printf("%d position", linSearch(a,13,5));
}

int linSearch(int a[], int l, int d){
    int i;
    for(i=0;i<=l;i++){
        if(a[i]==d){
            return i;
        }
    
    }
    return -1;
}*/
#include <stdio.h>
int linSearch(const int *a, int n, int key);
int main(void){
    int a[13]={20,10,30,2,3,4,1,1222,231,13,213,5,923};
   printf("%d position", linSearch(a,13,5));
}

int linSearch(const int *a, int l, int key){
    int i=0;
    for(;*a;++a){
        if(*a==key){

            return i;
        }
        else{
            i++;
        }
    
    }
    return -1;
}
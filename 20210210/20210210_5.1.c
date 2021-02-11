/*Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
#include <stdio.h>
void sort( int a[],int n){

}*/
#include <stdio.h>
void sort ( int *a, int n){
int temp;
for (int i=0;  i< n - 1; ++i)
for (int j = i + 1; j < n; ++j )
if ( *(a+i) > *(a+j) ) {

temp = *(a+i);
*(a+i) = *(a+j);
*(a+j) = temp;
}
}
int main(){
    int a[10]={23,91,36,4,9,99,87,11,2,33};
    sort(a,10);
    for(int i =0;i<10;i++){
        printf("%d\n",a[i]);
    }
}

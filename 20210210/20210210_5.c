/*Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}
*/
#include <stdio.h>
int sum_array(const int *a,int n);
int main(){
   int a[10]={23,91,36,4,9,99,87,11,2,33};
   int *p=a;
   printf("%d\n",sum_array(p,2));
}
int sum_array(const int *a,int n){
    int sum=0;
    
    for(int c=0;c<n;c++){
        
        sum=*(a+c)+sum;
        
        
    }
    return sum;
}
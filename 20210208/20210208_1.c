/*Дефинирайте и инициализирайте едномерен масив с 5
елемента. Следкато сте готови, направете въвеждане на данните в масива,
като четете от потребителя със scanf.
*/
#include <stdio.h>

int main(){
    int array[5];
   for(int i=0;i<5;i++){
  scanf("%d", &array[i]);
   }
    printf("%d\n",array[0]);
    printf("%d",array[2]);
}
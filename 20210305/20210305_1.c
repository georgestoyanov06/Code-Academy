/*За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;/*дълги дъски*/
    int b;/*къси дъски*/
    int c;/*малки скоби*/
    int d;/*големи скоби*/
    int e;/*винтчета*/

}sklad;
void materiali(sklad *moiSklad){
    printf("Broi dulgi duski\n");
    scanf(" %d",&moiSklad->a);
    printf("Kusi duski\n");
    scanf(" %d",&moiSklad->b);
    printf("Malki skobi\n");
    scanf(" %d",&moiSklad->c);
    printf("Golemi skobi\n");
    scanf(" %d",&moiSklad->d);
    printf("Vintove\n");
    scanf(" %d",&moiSklad->e);
}
int funEtajerki(sklad *moiSklad){
    int count;
    while(1){
        if(moiSklad->a<4 || moiSklad->b<6 || moiSklad->c<12 || moiSklad->d<2 || moiSklad->e<14){
            break;
        }
        else{
            moiSklad->a-=4;
            moiSklad->b-=6;
            moiSklad->c-=12;
            moiSklad->d-=2;
            moiSklad->e-=14;
            count++;
        }
    }
    return count;
}
int main(){
    sklad *ptrMoiSklad=malloc(sizeof(sklad));
    materiali(ptrMoiSklad);/*С наличните на склад материали 
    (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки.*/
    printf("bri%d",ptrMoiSklad->a);
    printf("broi etajerki %d",funEtajerki(ptrMoiSklad));
    free(ptrMoiSklad);
}

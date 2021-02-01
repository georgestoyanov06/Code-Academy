/*Направете програма за изчисляване на баркод UPC(Universal Product Code)
Производителите на стоки от години поставят баркодове на своите продукти. 
Всеки баркод представлява 12 числа:
Първото число е типа на продукта
Лявата група числа представят производителя,
Дясната група числа представят продукта
Последното число е за проверка.

0 13800 15173 5

Ето алгоритъма за изчисление на проверката за грешка:
Съберете нечетните числа: първото, третото, петото и т.н.
Съберете четните числа: второто, четвъртото и т.н
Умножете първата сума по 3 и добавете втората сума.
Извадете 1 от тотала
Делите тотала по модул на 10.
Изваждате резултата от 9 и трябва да получите последната цифра.*/
#include <stdio.h>

int main(){
    char barCode[12];
    int  oddNumberSum=0;
    int  evenNumberSum=0;
    int  proverka=0;
    int  i=0;
    
    scanf("%s",&barCode);
    for (i=0;i<12;i+=2)
        {
        oddNumberSum=(barCode[i]-'0')+oddNumberSum;
          
        }    
    for(i=1;i<12;i+=2)
        {
        evenNumberSum=(barCode[i]-'0')+evenNumberSum;
        
        }
        
    proverka=((oddNumberSum*3)+evenNumberSum)-1;

     
    if (proverka < 0)
     {
         proverka=proverka*(-1);
         proverka=9-(proverka/10);

     }
    else{
         proverka=9-(proverka/10);
     }
     
    if((proverka+'0')==barCode[11]) { 
         
         printf("Barcode is valide");
         }
    
    else{
         printf("Barcode is invalide");
        }
}
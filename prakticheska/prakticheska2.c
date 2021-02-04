#include<stdio.h>
int main(){
    int  barCode[12];
    int  oddNumberSum=0;
    int  evenNumberSum=0;
    int  proverka=0;
    int  i=0;
    scanf("%d",&barCode);
    printf("%s\n",barCode);
    for (i=0;i<12;i+=2)
        {
        oddNumberSum=barCode[i]+oddNumberSum;
          
        }    
        printf("oddNumberSum=%d\n",oddNumberSum);
        for(i=1;i<=10;i+=2)
        {
        evenNumberSum=barCode[i]+evenNumberSum;
        
        }
        proverka=((oddNumberSum*3)+evenNumberSum)-1;
        proverka %=10;
        proverka=9-proverka;
        printf("proverka %c %d\n",proverka,proverka);
        if (proverka==barCode[11]){
            printf("the code is valid\n");

        }
        else {
            printf("the coide is not valid\n");
        }
        return 0;
}
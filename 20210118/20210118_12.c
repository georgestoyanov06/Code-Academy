#include <stdio.h>
int main(){
    int nX; 
    int nY;
    int nP;
    int nG;
    printf("vuvedi stoinost na nX\n");
    scanf("%d",&nX);
    printf("vuvedi stoinost na nY\n");
    scanf("%d",&nY);
if (nX == nY) /*pri rezultat true shte ni se izpishe purviqt printf ako ne
 otivame na else if koeto pak shte proveri ako e true izpisva 
 printf na 15 red ako ne  produljava kum else koito izpisvaprintf na 19 red*/ {
    printf("%d and %d are equal\n", nX, nY);
    } 
else if (nX > nY) 
    { printf("%d is greater than %d\n", nX, nY);}
else {
    printf("%d is less than %d\n ", nX,nY);
}

    printf("vuvedi stoinist na nP\n");
    scanf("%d",&nP);
    printf("vuvedi stoinost na nG\n");
    scanf("%d",&nG);
if (nP>=nG){
    printf("%d is equal or greater than %d",nP,nG);
}
else
{
      printf("%d is less than %d",nP,nG);  
}





}
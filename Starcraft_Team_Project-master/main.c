#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"
#include "Vector.h"
#include <string.h>
#include "BattleField.h"


bool processTerranTurn(BattleField *battleField) {
  int i;
 
      for(i=0;i<battleField->terranFleet.size;i++){
    Airship *currShip=vectorGet(&battleField->terranFleet,i);
    Airship *currShip1=vectorBack(&battleField->protossFleet);
    printf("I =%d  terranfleet size%d \n",i,battleField->terranFleet.size);
    currShip1->health=currShip1->health-currShip->demage;
    printf("Curship health of protosfleet ship%d\n",currShip1->health);
     if(currShip1->health<=0){
      
    vectorPop(&battleField->protossFleet);
    if(battleField->protossFleet.size==0){
      printf("vliza\n");
      return true;
      break;
      }
   
     }
      }
     return false;
}
    
bool processProtossTurn(BattleField *battleField) {
  int i=0;
  for(i;i<battleField->protossFleet.size;i++){
    Airship *currShip3=vectorGet(&battleField->protossFleet,i);
    Airship *currShip4=vectorBack(&battleField->terranFleet);
    printf("terranfleet %d\n",battleField->terranFleet.size);
    printf("I =%d  protosfleet size %d \n",i,battleField->protossFleet.size);
    currShip4->health=currShip4->health - currShip3->demage;
    printf("Curship health1 --------------- terranFleet ship %d\n",currShip4->health);
    if (currShip4->health < 0 || currShip4->health == 0)
    {
    printf("ISKAM DA VLEZE");
     vectorPop(&battleField->terranFleet);
      if(battleField->terranFleet.size<=0){
        printf("vliza1\n");
        return true;
        break;
      }
    
  }
  }
    return false;
  

}
    
void startBattle(BattleField *battleField) {
  while (true) {
    if (processTerranTurn(battleField)) {
      printf("TERRAN has won!\n");
      break;
    }

    if (processProtossTurn(battleField)) {
      printf("PROTOSS has won!\n");
      break;
    }
  }
};

int main() {
  const int buffSize = 50;
  char terranFleet[buffSize];
  char protossFleet[buffSize];
  printf("enter terrantFlеets\n");
  scanf("%s", terranFleet);
  fflush(stdin);
  printf("enter protossFlеets\n");
  scanf("%s", protossFleet);
 
  
  BattleField battleField;
  generateTerranFleet(&battleField, terranFleet);
  generateProtossFleet(&battleField, protossFleet);

  startBattle(&battleField);
  // deinit(&battleField);

  return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"
#include "Vector.h"
#include <string.h>
#include "BattleField.h"
int count=0;
/*void shiled(Airship *curr,Airship *curr1){
  if(curr1->shield>=0){
    curr1->shield-=curr->demage;
    if(curr1->shield<0){
      curr1->health+=curr1->shield;
    }
  }
  
}*/
void attackTerran(int count,Airship *curr,Airship *curr1){
  if(curr->type==BATTLE_CRUSER && count%5==0 && count!=0){
        printf("yamato cannon used\n");
        if(curr1->shield>=0){
          curr1->shield-=curr->demage*5;
          if(curr1->shield<0){
              curr1->health+=curr1->shield;
              curr1->shield=0;
          }
          
  }
  }
  else if(curr->type==VIKING && curr1->type==PHOENIX){
        
        if(curr1->shield>=0){
          curr1->shield-=curr->demage*2;
          if(curr1->shield<0){
            curr1->health+=curr1->shield;
            curr1->shield=0;
          }        
  }
  }
  else{
    if(curr1->shield>=0){
      curr1->shield-=curr->demage;
      if(curr1->shield<0){
        curr1->health+=curr1->shield;
      }
  }
}
}
void regenProtos(Airship *curr1){
    if(curr1->type==PHOENIX){
      if(curr1->shield>=70){
        curr1->shield=90;

      }
      else{
        curr1->shield+=20;
      }
    }


}
bool processTerranTurn(BattleField *battleField) {
  int i;
   Airship *currShip;
   Airship *currShip1;

      for(i=0;i<battleField->terranFleet.size;i++,count++){
    currShip=vectorGet(&battleField->terranFleet,i);
    currShip1=vectorBack(&battleField->protossFleet);
    
    attackTerran(count,currShip,currShip1);
    
     if(currShip1->health<=0){
      
    vectorPop(&battleField->protossFleet);
    if(battleField->protossFleet.size==0){
     
      return true;
      break;
      }
   
     }
      }
      printf("Last ProtossAirShip with ID: %d has %d health and%d shield left\n",i-1,currShip1->health,currShip1->shield);
     return false;
}
    
bool processProtossTurn(BattleField *battleField) {
  int i=0;
   Airship *currShip3;
   Airship *currShip4;
  for(i;i<battleField->protossFleet.size;i++){
     currShip3  =vectorGet(&battleField->protossFleet,i);
     currShip4 =vectorBack(&battleField->terranFleet);
    currShip4->health=currShip4->health - currShip3->demage;
    regenProtos(currShip3);
    
    if (currShip4->health < 0 || currShip4->health == 0)
    {
    
     vectorPop(&battleField->terranFleet);
      if(battleField->terranFleet.size<=0){
       
        return true;
        break;
      }
    
  }
  }
  printf("Last Terran AirShip with ID: %d has %d health left\n",i-1,currShip4->health);
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

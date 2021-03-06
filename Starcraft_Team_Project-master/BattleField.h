#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_
#include "Defines.h"
#include <stdbool.h>

#include "Vector.h"

typedef struct {
  Vector terranFleet;
  Vector protossFleet;
} BattleField;

typedef struct {
  enum AirShipType type;
  int health;
  int demage;
  int shield;
  int shieldRegenerateRate;
} Airship;

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr);
void generateProtossFleet(BattleField *battleField, const char *protossFleetStr);

void startBattle(BattleField *battleField);

void deinit(BattleField *battleField);

bool processTerranTurn(BattleField *battleField);
bool processProtossTurn(BattleField *battleField);

#endif /* BATTLEFIELD_H_ */

#ifndef GAME_H
#define GAME_H
#include "player/player.h"
#include "utility/inventory.h"
#include "config.h"
#include "player/player.h"
#include "graphics/graphics.h"
#include "utility/game_state.h"
#include "utility/utils.h"

void startGame();
void setAction(struct Player *p);
void execAction(int option, struct Player *p);
void forestPath();
void cavePath();
void fightMonster();
void runAway();

// Save and Load functions
void saveGameBinary(struct Player p, const char *filename);
int loadGameBinary(struct Player *p, const char *filename);


#endif  // GAME_H
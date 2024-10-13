#ifndef GAME_STATE_H
#define GAME_STATE_H
#include "../config.h"
#include "../player/player.h"

void saveGameBinary(struct Player p, const char *filename);
int loadGameBinary(struct Player *p, const char *filename);

#endif
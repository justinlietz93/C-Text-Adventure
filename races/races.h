#ifndef RACE_H
#define RACE_H

struct Race {
    char name[25];
    int health;
    int str;
    int agi;
    int dex;
    int wis;
    int mag;
};


extern struct Race availableRaces[4];


struct Race getRace(int choice);


#endif  // RACE_H

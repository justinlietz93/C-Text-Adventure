// races.c
#include "races.h"
#include <string.h>


struct Race availableRaces[4] = {
    {"Human", 100, 10, 10, 10, 10, 10},
    {"Elf",    80, 12, 14, 10, 12, 14},
    {"Dwarf",  120, 14, 8, 12, 10, 8},
    {"Orc",    150, 16, 6, 8, 6, 4}
};

struct Race getRace(int choice) {
    if (choice < 1 || choice > 4) {
        struct Race defaultRace = {"Human", 100, 10, 10, 10, 10, 10};
        return defaultRace;
    }
    return availableRaces[choice - 1];
}

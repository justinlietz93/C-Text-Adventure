#include "game_state.h"

// save game in binary format
void saveGameBinary(struct Player p, const char *filename) {
    FILE *file = fopen(filename, "wb"); // Open in binary write mode
    if (file == NULL) {
        printf("Error opening file for saving.\n");
        return;
    }

    // Write the entire Player struct to the file
    fwrite(&p, sizeof(struct Player), 1, file);

    fclose(file);
}

// load game from binary format
int loadGameBinary(struct Player *p, const char *filename) {
    FILE *file = fopen(filename, "rb"); // Open in binary read mode
    if (file == NULL) {
        return 0; // No save file found
    }

    // Read Player struct from the file
    size_t read = fread(p, sizeof(struct Player), 1, file);
    fclose(file);

    if (read != 1) {
        printf("Error reading save file.\n");
        return 0;
    }

    return 1; // Successfully loaded
}

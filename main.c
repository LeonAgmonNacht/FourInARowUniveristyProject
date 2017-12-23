#include "SPFIARGame.h"

int main () {
    SPFiarGame* game = spFiarGameCreate(10);
    spFiarGamePrintBoard(game);
}

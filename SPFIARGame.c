#include "SPFIARGame.h"
#include "SPArrayList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

SPFiarGame* spFiarGameCreate(int historySize) {
    if (historySize <= 0) return NULL;
    SPFiarGame *game = malloc(sizeof(SPFiarGame));
    if (game == NULL) return NULL;
    game->currentPlayer = SP_FIAR_GAME_PLAYER_1_SYMBOL; // User goes first!
    game->historySize = historySize;
    SPArrayList* historyList= spArrayListCreate(historySize);
    if (historyList == NULL) return NULL;
    game->historyList = historyList;
    memset(game->gameBoard, SP_FIAR_GAME_EMPTY_ENTRY, sizeof(game->gameBoard));
    return game;
}

SPFiarGame* spFiarGameCopy(SPFiarGame* src) {
    SPFiarGame* clone = spFiarGameCreate(src->historySize);
    clone->historyList = spArrayListCopy(src->historyList);
    clone->currentPlayer = src->currentPlayer;
    memcpy(clone->tops, src->tops, SP_FIAR_GAME_N_COLUMNS * sizeof(int));
    memcpy(clone->gameBoard, src->gameBoard, SP_FIAR_GAME_N_ROWS * SP_FIAR_GAME_N_COLUMNS * sizeof(int));
    return clone;
}

void spFiarGameDestroy(SPFiarGame* src) {
    if (src == NULL) return;
    spArrayListDestroy(src->historyList);
    free(src);

}

bool spFiarGameIsValidMove(SPFiarGame* src, int col) {
    bool isColFull = true;
    for (int row = 0; row<SP_FIAR_GAME_N_ROWS; row++) {
        if (src->gameBoard[row][col] == SP_FIAR_GAME_EMPTY_ENTRY) {
            isColFull = false;
        }
    }
    return !isColFull;
}
/**
 * Switches the current player on src
 */
void changeCurrentPlayer(SPFiarGame* src) {
    if (src->currentPlayer == SP_FIAR_GAME_PLAYER_1_SYMBOL) {
        src->currentPlayer = SP_FIAR_GAME_PLAYER_2_SYMBOL;
    }
    else {
        src->currentPlayer = SP_FIAR_GAME_PLAYER_1_SYMBOL;
    }
}
/**
 * Returns the first empty row at column col on game src. 0 is the bottom most row. if col is full SP_FIAR_GAME_N_ROWS
 * will be returned.
 */
int getFirstFreeRowAtCol(SPFiarGame* src, int col) {
    int firstFreeRow = SP_FIAR_GAME_N_ROWS;
    for (int row = 0; row<SP_FIAR_GAME_N_ROWS; row++) {
        if (src->gameBoard[row][col] == SP_FIAR_GAME_EMPTY_ENTRY) {
            firstFreeRow = row;
            break;
        }
    }
    return firstFreeRow;
}

SP_FIAR_GAME_MESSAGE spFiarGameSetMove(SPFiarGame* src, int col) {
    if (src == NULL || col > SP_FIAR_GAME_N_COLUMNS) return SP_FIAR_GAME_INVALID_ARGUMENT;
    if (!spFiarGameIsValidMove(src, col)) return SP_FIAR_GAME_INVALID_MOVE;

    int firstFreeRow = getFirstFreeRowAtCol(src, col);

    src->gameBoard[firstFreeRow][col] = src->currentPlayer;
    changeCurrentPlayer(src);
    spArrayListAddLast(src->historyList, col);
    return SP_FIAR_GAME_SUCCESS;
}

SP_FIAR_GAME_MESSAGE spFiarGameUndoPrevMove(SPFiarGame* src) {
    if (src == NULL) return SP_FIAR_GAME_INVALID_ARGUMENT;
    if ((src->historyList)->actualSize == 0) return SP_FIAR_GAME_NO_HISTORY;
    changeCurrentPlayer(src);
    int lastMoveCol = spArrayListGetLast(src->historyList);
    spArrayListRemoveLast(src->historyList);
    int rowToUndoAt = getFirstFreeRowAtCol(src, lastMoveCol);
    (src->gameBoard)[rowToUndoAt][lastMoveCol] = SP_FIAR_GAME_EMPTY_ENTRY;
    return SP_FIAR_GAME_SUCCESS;
}

void printRow(char* row) {
    printf("|");
    for (int col = 0; col < SP_FIAR_GAME_N_COLUMNS; col++) {
        printf(" %c", row[col]);
    }
    printf(" |\n");
}

SP_FIAR_GAME_MESSAGE spFiarGamePrintBoard(SPFiarGame* src) {
    if (src == NULL) return SP_FIAR_GAME_INVALID_ARGUMENT;
    for (int row = SP_FIAR_GAME_N_ROWS-1; row >= 0; row --) {
        printRow((src->gameBoard)[row]);
    }
    printf("-----------------");
    printf("  1 2 3 4 5 6 7  ");
    return SP_FIAR_GAME_SUCCESS;
}

char spFiarGameGetCurrentPlayer(SPFiarGame* src) {
    return src->currentPlayer;
}

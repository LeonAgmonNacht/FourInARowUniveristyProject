#include "SPFIARGame.h"
#include "SPArrayList.h"


SPFiarGame* spFiarGameCreate(int historySize) {
    if (historySize <= 0) return NULL;
    SPFiarGame *game = malloc(sizeof(SPFiarGame));
    if (game == NULL) return NULL;
    game->currentPlayer = SP_FIAR_GAME_PLAYER_1_SYMBOL; // User goes first!
    game->historySize = historySize;
    game->historyList = spArrayListCreate(historySize);
    memset(game->gameBoard, SP_FIAR_GAME_EMPTY_ENTRY, sizeof(game->gameBoard))
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
    if (src == null) return;
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

SP_FIAR_GAME_MESSAGE spFiarGameSetMove(SPFiarGame* src, int col) {
    if (src == null || col > SP_FIAR_GAME_N_COLUMNS) return SP_FIAR_GAME_INVALID_ARGUMENT;
    if (!spFiarGameIsValidMove(src, col)) return SP_FIAR_GAME_INVALID_MOVE;

    bool isColFull = true;
    for (int row = 0; row<SP_FIAR_GAME_N_ROWS; row++) {
        if (src->gameBoard[row][col] == SP_FIAR_GAME_EMPTY_ENTRY) {
            firstFreeRow = row;
            break;
        }
    }

    src->gameBoard[firstFreeRow][col] = src->currentPlayer;
    // TODO: We want to chagne the next player here?

    return SP_FIAR_GAME_SUCCESS;
}
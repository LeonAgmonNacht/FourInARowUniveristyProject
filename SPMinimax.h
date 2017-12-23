#ifndef SPMINIMAX_H_
#define SPMINIMAX_H_

#include "SPFIARGame.h"

/**
 * Given a game state, this function evaluates the best move according to
 * the current player. The function initiates a Minimax algorithm up to a
 * specified length given by maxDepth. The current game state doesn't change
 * by this function including the history of previous moves.
 *
 * @param currentGame - The current game state
 * @param maxDepth - The maximum depth of the miniMax algorithm
 * @return
 * -1 if either currentGame is NULL or maxDepth <= 0.
 * On success the function returns a number between [0,SP_FIAR_GAME_N_COLUMNS -1]
 * which is the best move for the current player.
 */
int spMinimaxSuggestMove(SPFiarGame* currentGame,
		unsigned int maxDepth);

#endif

#ifndef SPMAINAUX_H_
#define SPMAINAUX_H_

//put auxiliary functions and constants used by the main function here.

#include "SPFIARGame.h"


/**
 *scoring the game state as the current player playes
 * @param gameState the game state
 * @param boardCell the board cell to score
 * @param span_direction the span direction to score
 * @return the score as described
 */
int scoreSpan(SPFiarGame* gameState, SPFiarBoardCell* boardCell,SPAN_DIRECTION span_direction);
#endif

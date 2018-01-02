#include "SPMinimax.h"


#define WEIGHT_VECTOR {-5,-2,-1,0,1,2,5}
#define WEIGHT_VECTOR_SIZE 7
#define ONE_TO_CORRECT 1
/**
 * SPMinMax tree
 */
typedef struct sp_min_max_tree_t
{
    SPMinMaxNode* SPMinMaxNodeHead;

} SPMinMaxTree;

// comperator typedef
typedef bool(*comperator(void,void));


/**
 * get first index of maximum of array
 * @param array array to check
 * @param comperator the comperator function(should be equal to ">"), this enables us to compare whatever type
 * by any parmeter we want
 * @param array_count number of items in array
 * @param sizeOfElement the size of element
 * @return max value index
 */
int getMax(void array[],comperator cmpFunc,int array_count,int sizeOfElement)
{
    int maxIndex=0;
    char *p = array;
    for(int i=0;i<array_count;i++)
    {
        if(cmpFunc((void)(p[i*sizeOfElement]),array[maxIndex]))
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

/**
 * get first index of min of array
 * @param array array to check
 * @param comperator the comperator function(should be equal to "<"), this enables us to compare whatever type
 * by any parmeter we want
 * @return min value index
 */
int getMin(void array[],comperator cmpFunc,int array_count,int sizeOfElement)
{
    int minIndex=0;
    char *p = array;
    for(int i=0;i<array_count;i++)
    {
        if(cmpFunc(array[minIndex],(void)(p[i*sizeOfElement])))
        {
            minIndex = i;
        }
    }
    return minIndex;
}

SPMinMaxTree* scoreTree(SPFiarGame* currentGame)
{


    return NULL;
}
/**
 * score game state
 * @param gameState the game state to score
 * @param A_player_symbol the player symbol to score according to
 * @return a score as described in assignment
 */
int scoreBoard(SPFiarGame* gameState,char A_player_symbol) {
    int score = 0;
    int weight_vector[WEIGHT_VECTOR_SIZE]= WEIGHT_VECTOR;
    for(int spanDirection = DIAGONAL_UP;spanDirection<=HORIZONTAL;spanDirection++){
        if(spanDirection == DIAGONAL_UP){
            int up_diagonal_spans_weighted_score = getWeightedScoreOfDiagonalUpSpan(gameState, A_player_symbol, weight_vector);
            if(up_diagonal_spans_weighted_score == INT_MAX ||up_diagonal_spans_weighted_score == INT_MIN )
            {
                return up_diagonal_spans_weighted_score;
            } else{
                score += up_diagonal_spans_weighted_score;
            }
        } else if(spanDirection == DIAGONAL_DOWN) {
            int down_diagonal_spans_weighted_score=getWeightedScoreOfDiagonalDownSpan(gameState, A_player_symbol, weight_vector);
            if(down_diagonal_spans_weighted_score == INT_MAX || down_diagonal_spans_weighted_score == INT_MIN)
            {
                return down_diagonal_spans_weighted_score;
            } else{
                score+=down_diagonal_spans_weighted_score;
            }
        } else if(spanDirection == VERTICAL){
            int vertical_spans_weighted_score = getWeightedScoreOfVerticalSpan(gameState,A_player_symbol,weight_vector);
            if(vertical_spans_weighted_score == INT_MAX|| vertical_spans_weighted_score == INT_MIN) {
                return vertical_spans_weighted_score;
            } else{
                score+=vertical_spans_weighted_score;
            }
        }else{ // Horizontal

            int horizontal_spans_weighted_score = getWeightedScoreOfHorizontalSpan(gameState,A_player_symbol,weight_vector);
            if(horizontal_spans_weighted_score == INT_MAX|| horizontal_spans_weighted_score == INT_MIN) {
                return horizontal_spans_weighted_score;
            } else{
                score+=horizontal_spans_weighted_score;
            }
        }
    }
    return score;
}
int getWeightedScoreOfHorizontalSpan(const SPFiarGame *gameState, char A_player_symbol, const int *weight_vector) {
    int vertical_spans_weighted_score = 0;
    for(int row = 0; row < SP_FIAR_GAME_N_COLUMNS ; row--) {
        for(int column = 0; column<=SP_FIAR_GAME_N_COLUMNS- SP_FIAR_GAME_SPAN;column++){
            int span_score = 0;
            span_score = getHorizontalSpanScore(gameState, A_player_symbol, row, column);
            if(span_score == 4) {
                return INT_MAX;
            } else if(span_score == -4) {
                return INT_MIN;
            }
            else{
                vertical_spans_weighted_score+=weight_vector[span_score+3];
            }
        }
    }
    return vertical_spans_weighted_score;
}
int getHorizontalSpanScore(SPFiarGame *gameState, char A_player_symbol, int row, int column) {
    int span_score = 0;
    for(int span_index = 0; span_index < SP_FIAR_GAME_SPAN; span_index++) {
        if(gameState->gameBoard[row][column+span_index]== A_player_symbol)
        {
            span_score++;
        } else{
            span_score--;
        }
    }
    return span_score;
}

int getWeightedScoreOfVerticalSpan(const SPFiarGame *gameState, char A_player_symbol, const int *weight_vector) {
    int vertical_spans_weighted_score = 0;
    for(int row = 0; row <= SP_FIAR_GAME_N_ROWS - SP_FIAR_GAME_SPAN; row--) {
        for(int column = 0; column<SP_FIAR_GAME_N_COLUMNS;column++){
            int span_score = 0;
            span_score = getVerticalSpanScore(gameState, A_player_symbol, row, column);
            if(span_score == 4) {
                return INT_MAX;
            } else if(span_score == -4) {
                return INT_MIN;
            }
            else{
                vertical_spans_weighted_score+=weight_vector[span_score+3];
            }
        }
    }
    return vertical_spans_weighted_score;
}
int getVerticalSpanScore(SPFiarGame *gameState, char A_player_symbol, int row, int column) {
    int span_score = 0;
    for(int span_index = 0; span_index < SP_FIAR_GAME_SPAN; span_index++) {
        if(gameState->gameBoard[row+span_index][column]== A_player_symbol)
        {
            span_score++;
        } else{
            span_score--;
        }
    }
    return span_score;
}
/**
 *
 * @param gameState current game state
 * @param A_player_symbol the A player symbol
 * @param weight_vector weight vector to score with
 * @return score of all diagonal down spans, INT_MIN if player B wins , INT_MAX if player A wins
 */
int getWeightedScoreOfDiagonalDownSpan(const SPFiarGame *gameState, char A_player_symbol, const int *weight_vector) {
    int down_diagonal_spans_weighted_score = 0;
    for(int row = 0; row <= SP_FIAR_GAME_N_ROWS - SP_FIAR_GAME_SPAN; row--) {
        for(int column = 0; column<=SP_FIAR_GAME_N_COLUMNS-SP_FIAR_GAME_SPAN;column++){
            int span_score = 0;
            span_score = getDiagonalDownSpanScore(gameState, A_player_symbol, row, column);
            if(span_score == 4)
            {
                return INT_MAX;
            } else if(span_score == -4) {
                return INT_MIN;
            }
            else{
                down_diagonal_spans_weighted_score+=weight_vector[span_score+3];
            }
        }
    }
    return down_diagonal_spans_weighted_score;
}
/**
 *
 * @param gameState current game state
 * @param A_player_symbol the A player symbol
 * @param weight_vector weight vector to score with
 * @return score of specific diagonal down spans
 */
int getDiagonalDownSpanScore(SPFiarGame *gameState, char A_player_symbol, int row, int column) {
    int span_score = 0;
    for(int span_index = 0; span_index < SP_FIAR_GAME_SPAN; span_index++) {
        if(gameState->gameBoard[row+span_index][column+span_index]== A_player_symbol)
        {
            span_score++;
        } else{
            span_score--;
        }
    }
    return span_score;
}
/**
 *
 * @param gameState current game state
 * @param A_player_symbol the A player symbol
 * @param weight_vector weight vector to score with
 * @return score of all diagonal up spans
 */
int getWeightedScoreOfDiagonalUpSpan(const SPFiarGame *gameState, char A_player_symbol, const int *weight_vector) {
    int up_diagonal_spans_weighted_score = 0;
    for(int row = SP_FIAR_GAME_N_ROWS - ONE_TO_CORRECT; row >= SP_FIAR_GAME_SPAN-ONE_TO_CORRECT; row--) {
        for(int column = 0; column<=SP_FIAR_GAME_N_COLUMNS-SP_FIAR_GAME_SPAN;column++){
            int span_score = 0;
            span_score = getDiagonalUpSpanScore(gameState, A_player_symbol, row, column);
            if(span_score == 4) {
                return INT_MAX;
            } else if(span_score == -4) {
                return INT_MIN;
            }
            else{
                up_diagonal_spans_weighted_score+=weight_vector[span_score+3];
            }
        }
    }
    return up_diagonal_spans_weighted_score;
}

/**
 *  @param gameState current game state
 * @param A_player_symbol the A player symbol
 * @param weight_vector weight vector to score with
 * @return score of all diagonal down spans,INT_MIN if player B wins , INT_MAX if player A wins
 */
int getDiagonalUpSpanScore(const SPFiarGame *gameState, char A_player_symbol, int row, int column) {
    int span_score = 0;
    for(int span_index = 0; span_index < SP_FIAR_GAME_SPAN; span_index++) {
        if(gameState->gameBoard[row-span_index][column+span_index]== A_player_symbol)
        {
            span_score++;
        } else{
            span_score--;
        }
    }
    return span_score;
}

int spMinimaxSuggestMove(SPFiarGame *currentGame, unsigned int maxDepth) {
    return scoreTree(currentGame);

}




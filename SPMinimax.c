#include "SPMinimax.h"


#define WEIGHT_VECTOR {-5,-2,-1,1,2,5}
#define WEIGHT_VECTOR_SIZE 6
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
int scoreBoard(SPFiarGame* gameState,char A_player_symbol)
{
    int score = 0;
    int weight_vector[WEIGHT_VECTOR_SIZE]= WEIGHT_VECTOR;
    for(int spanDirection = DIAGONAL_UP;spanDirection<=HORIZONTAL;spanDirection++){
        if(spanDirection == DIAGONAL_UP){
            for(int row = 0;row>=SP_FIAR_GAME_SPAN;row++) {
                for(int column = 0; column<SP_FIAR_GAME_N_COLUMNS-SP_FIAR_GAME_SPAN;column++){

                }
            }
        }
    }

}

int spMinimaxSuggestMove(SPFiarGame *currentGame, unsigned int maxDepth) {
    return scoreTree(currentGame);

}




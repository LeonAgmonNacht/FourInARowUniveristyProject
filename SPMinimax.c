#include "SPMinimax.h"


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

SPMinMaxTree* scoreTree()
{


    return NULL;
}
/**
 * score game state
 * @param gameState the game state to score
 * @return a score as described in assignment
 */
int scoreBoard(SPFiarGame* gameState)
{

}

int spMinimaxSuggestMove(SPFiarGame *currentGame, unsigned int maxDepth) {
    return scoreTree();

}




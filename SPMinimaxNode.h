#ifndef SPMINIMAXNODE_H_
#define SPMINIMAXNODE_H_

//Put all decleartions and constants here

#define MAX_DEPTH 7

#define CHILDREN_CONST_DEPTH_INCREASE 1
/**
 * struct that represents min max node
 */
typedef struct sp_min_max_node_t
{
    struct sp_min_max_node_t* ancestor;
    struct sp_min_max_node_t* children[];
    int children_count;
    int score;
    int depth;
    char tree_representation[MAX_DEPTH];
} SPMinMaxNode;




/**
 * set the children of the node, sets the node as ancestor to children.
 * @param node the node to set the children's of
 * @param children the children pointer
 * @param children_count the number of children of the node
 */
void setChildren(SPMinMaxNode* node,SPMinMaxNode* children[],int children_count);



#endif

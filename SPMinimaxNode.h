#ifndef SPMINIMAXNODE_H_
#define SPMINIMAXNODE_H_

//Put all decleartions and constants here

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
} SPMinMaxNode;



/**
 * set ancestor to node
 * @param node the node to set ancestor to
 * @param ancestor the ancestor of the node
 */
void setAncestor(SPMinMaxNode* node,SPMinMaxNode* ancestor);


/**
 * set the children of the node, sets the node as ancestor to children.
 * @param node the node to set the children's of
 * @param children the children pointer
 * @param children_count the number of children of the node
 */
void setChildren(SPMinMaxNode* node,SPMinMaxNode* children[],int children_count);



#endif

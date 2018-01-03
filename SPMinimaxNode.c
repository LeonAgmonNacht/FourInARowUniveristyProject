
#include "SPMinimaxNode.h"
void setChildren(SPMinMaxNode *node, SPMinMaxNode **children, int children_count) {
    node->children;
    node->children_count = children_count;
    int children_depth = node->depth+CHILDREN_CONST_DEPTH_INCREASE;
    for (char i = 0; i < children_count ; ++i) {
        children[i]->ancestor=node;
        children[i]->depth= children_depth;
        for(int j=0;j<node->depth;j++) {
            children[i]->tree_representation[j]=node->tree_representation[i];

        }
        children[i]->tree_representation[node->depth]=i;
    }
}


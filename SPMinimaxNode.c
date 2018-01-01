
#include "SPMinimaxNode.h"

void setChildren(SPMinMaxNode *node, SPMinMaxNode **children, int children_count) {
    node->children;
    node->children_count = children_count;
    for (int i = 0; i < children_count ; ++i) {
        setAncestor(children[i],node);
        children[i]->ancestor=node;
    }
}

void setAncestor(SPMinMaxNode *node, SPMinMaxNode *ancestor) {
    node->ancestor=ancestor; // silly to create such a function buy might be helpful for future implementations
}

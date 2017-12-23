#include "SPArrayList.h"

SPArrayList* spArrayListCreate(int maxSize) {
    if (maxSize <= 0) {
        return NULL;
    }

    SPArrayList list;
    list.maxSize = maxSize;
    list.actualSize = 0;
    list.elements = malloc(maxSize * sizeof(int));
}
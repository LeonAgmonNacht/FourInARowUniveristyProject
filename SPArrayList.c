#include "SPArrayList.h"
#include <stdlib.h>
#include <string.h>
/**
 * Fills the given array with EMPTY_ITEM_VALUE
 */
void fillWithDefaultValue(int* array, int arraySize) {
    for (int i = 0; i < arraySize; i++)
        array[i] = EMPTY_ITEM_VALUE;
}

SPArrayList* spArrayListCreate(int maxSize) {
    if (maxSize <= 0) {
        return NULL;
    }

    SPArrayList *list = malloc(sizeof(SPArrayList));
    list->maxSize = maxSize;
    list->actualSize = 0;
    list->elements = malloc(maxSize * sizeof(int));
    fillWithDefaultValue(list->elements, list->maxSize);

    if (list->elements == NULL) {
        return NULL;
    }
    return list;
}

SPArrayList* spArrayListCopy(SPArrayList* src) {
    if (src == NULL) {
        return NULL;
    }
    SPArrayList* clone = spArrayListCreate(src->maxSize);
    clone->actualSize = src->actualSize;
    memcpy(clone->elements, src->elements, (clone->actualSize) * sizeof(int));

    return clone;
}

void spArrayListDestroy(SPArrayList* src) {
    if (src == NULL) {
        return;
    }
    free(src->elements);
    free(src);
    // TODO: Meltzer do u approve?
    //Answer: Yes
}

SP_ARRAY_LIST_MESSAGE spArrayListClear(SPArrayList* src) {
    if (src == NULL) {
        return SP_ARRAY_LIST_INVALID_ARGUMENT;
    }
    src->actualSize = 0;
    free(src->elements);
    src->elements = malloc(src->maxSize * sizeof(int));
    fillWithDefaultValue(src->elements, src->maxSize);
    return SP_ARRAY_LIST_SUCCESS;
}
/**
 * Shifts the array 1 index to the right if should_shift_right, else shifting 1 index to the left.
 * This function assumes that it is possible to make the shift (there is enough memory etc...)
 */
void shiftArray(int* array, bool shouldShiftRight, int shiftIndex, int arraySize) {

    if (shouldShiftRight) {
        for (int i = arraySize; i >= shiftIndex; i--) {
            array[i] = array[i - 1];
        }

    }
    else {
        for (int i = shiftIndex; i < arraySize; i++) {
            array[i] = array[i + 1];
        }
    }
}

SP_ARRAY_LIST_MESSAGE spArrayListAddAt(SPArrayList* src, int elem, int index) {

    if (src == NULL || index > src->actualSize) {
        return SP_ARRAY_LIST_INVALID_ARGUMENT;
    }
    if (src->actualSize == src->maxSize) {
        return SP_ARRAY_LIST_FULL;
    }

    shiftArray(src->elements, true, index, src->actualSize);

    // Insert new element
    (src->elements)[index-1] = elem;
    src->actualSize += 1;

    return SP_ARRAY_LIST_SUCCESS;
}

SP_ARRAY_LIST_MESSAGE spArrayListAddFirst(SPArrayList* src, int elem) {
    return spArrayListAddAt(src, elem, 0);
}

SP_ARRAY_LIST_MESSAGE spArrayListAddLast(SPArrayList* src, int elem) {
    return spArrayListAddAt(src, elem, src->actualSize);
}

SP_ARRAY_LIST_MESSAGE spArrayListRemoveAt(SPArrayList* src, int index) {

    if (src->actualSize == 0) return SP_ARRAY_LIST_EMPTY;
    if (src == NULL || index >= src->actualSize) return SP_ARRAY_LIST_INVALID_ARGUMENT;

    (src->elements)[index] = EMPTY_ITEM_VALUE;
    shiftArray(src->elements, false, index, src->actualSize);
    src->actualSize -= 1;

    return SP_ARRAY_LIST_SUCCESS;
}


SP_ARRAY_LIST_MESSAGE spArrayListRemoveFirst(SPArrayList* src) {
    return spArrayListRemoveAt(src, 0);
}

SP_ARRAY_LIST_MESSAGE spArrayListRemoveLast(SPArrayList* src) {
    return spArrayListRemoveAt(src, src->actualSize-1);
}

int spArrayListGetAt(SPArrayList* src, int index) {
    if (src == NULL || index >= src->maxSize) return -1;
    return (src->elements)[index];
}

int spArrayListGetFirst(SPArrayList* src) {
    return spArrayListGetAt(src, 0);
}

int spArrayListGetLast(SPArrayList* src) {
    return spArrayListGetAt(src, src->actualSize - 1);
}

int spArrayListMaxCapacity(SPArrayList* src) {
    if (src == NULL) return -1;
    return src->maxSize;
}

int spArrayListSize(SPArrayList* src) {
    if (src == NULL) return -1;
    return src->actualSize;
}

bool spArrayListIsFull(SPArrayList* src) {
    if (src == NULL) return false;
    return (src->actualSize != src->maxSize);
}

bool spArrayListIsEmpty(SPArrayList* src) {
    if (src == NULL) return false;
    return (src->actualSize == 0);
}

#include "arraylist.h"

ArrayList::ArrayList() {
    arrayList = (struct array_list *)malloc(sizeof(struct array_list));
    arrayList->size = 0;
    arrayList->capacity = ARRAYLIST_INITIAL_CAPACITY;
    arrayList->elements = (int *)(malloc(sizeof(int) * arrayList->capacity));
}

void ArrayList::add(int newElement) {
    /* Increases space if we need it. */
    double_capacity();

    /* Add the new element and increment the size. */
    arrayList->elements[arrayList->size++] = newElement;
}

int ArrayList::get(int index) {
    if (index >= arrayList->size || index < 0) {
      printf("Index %d out of bounds for ArrayList of size %d\n", index, arrayList->size);
      exit(1);
    }
    return arrayList->elements[index];
}

void ArrayList::set(int index, int newElement) {
    /* If the specified index is greater than the size, fill it with zeroes until that index. */
    while (index >= arrayList->size) {
      add(0);
    }

    /* Set the value at the indicated index. */
    arrayList->elements[index] = newElement;
}

int ArrayList::size() {
    return arrayList->size;
}

void ArrayList::double_capacity() {
    if (arrayList->size >= arrayList->capacity) {
      /* Double the capacity. */
      arrayList->capacity *= 2;
      arrayList->elements = (int *)realloc(arrayList->elements, sizeof(int) * arrayList->capacity);
    } else {
        /* Do nothing. No need to resize. */
    }
}

void ArrayList::arraylist_free() {
    free(arrayList->elements);
}

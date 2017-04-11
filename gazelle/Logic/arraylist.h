#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#define ARRAYLIST_INITIAL_CAPACITY 20
#include <stdio.h>
#include <stdlib.h>


class ArrayList
{
public:
    ArrayList();
    void add(int newElement);
    int get(int index);
    void set(int index, int newElement);
    int size();
    void arraylist_free();

private:
    void double_capacity();
    struct array_list {
      int capacity;
      int size;
      int *elements;
    } array_list;

    struct array_list* arrayList;

};

#endif // ARRAYLIST_H




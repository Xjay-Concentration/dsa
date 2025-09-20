
#ifndef LIST_H
#define LIST_H

#include "ListNode.h"
template <typename T> class List {
private:
    int _size; ListNodePost(T) header; ListNodePost(T) trailer;

protected:
    void init();

public:
    List(){init();}

    void traverse((void *) (T&));
};

#endif
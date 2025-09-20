
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

    void traverse(void (*) (T&));
};
//模版类的成员函数必须都在模版类所在头文件里实现，普通类的成员函数可以在cpp文件里实现

template <typename T> void List<T>::init() {
    return;
}


#endif
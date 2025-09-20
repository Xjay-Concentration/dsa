#ifndef LISTNODE_H
#define LISTNODE_H
typedef int Rank;
#define ListNodePost(T) ListNode<T>* //列表节点位置

template <typename T> 
struct ListNode {
    T data; ListNodePost(T) pred; ListNodePost(T) succ;
    
    ListNode(T e, ListNodePost(T) p = NULL, ListNodePost(T) s = NULL)
    : data(e), pred(p), succ(s) {}
    
    ~ListNode() {}

    ListNodePost(T) insertAsPred(T e);
    ListNodePost(T) insertAsSucc(T e);
};


#endif
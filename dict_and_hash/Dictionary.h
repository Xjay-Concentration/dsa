#ifndef DICTIONARY_H
#define DICTIONARY_H

#include<iostream>
template <typename T, typename K>
struct Dictionary {
    virtual int size() const = 0;    //虚函数，返回当前词条总数
    virtual void put(K, V) = 0;//虚函数，插入词条
    virtual V*get(K k) = 0;//读取词条
    virtual bool remove(K k) = 0;//删除词条
};

#endif
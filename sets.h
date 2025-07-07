#pragma once
#include<iostream>
// #include"sets.cpp"
using namespace std;
template< class setType >
class Set{
    private: 
    setType* arr;
    int size;

    public: 
    void setSize(int s);
    bool setSetIndex(setType val, int index);
    setType getSetIndex(int index) const;
    int getSize() const;

    Set(int s);
    Set(const Set &a);
    ~Set();
    void updateSize(int s);
    void display() const;

    bool contain(setType val )const;
    Set<setType> Union(const Set<setType> &other) const;
    Set<setType> intersection(const Set<setType> &other) const;
    Set<setType> diffrence(const Set<setType> &other) const;
    bool isSubSet(const Set<setType> &other) const;

};

#include "sets.cpp"
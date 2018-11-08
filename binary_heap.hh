#pragma once
#include <vector>

template <class T>
class Heap {
public:
    Heap(std::vector<T>);
    int size();
    void add_node(T);
    T pop_node();
private:
    std::vector<T> elements;
    void build_heap();
    void heapify(int node);
};

#include "binary_heap.hh"
#include <iostream>

// takes a set of values to start with
// does not assume they are already ordered correctly.
template<class T>
Heap<T>::Heap(std::vector<T> args){
    elements = args;
    build_heap();
}
// std::vectors such as elements automatically update their size
template<class T>
int Heap<T>::size(){
    return elements.size();
}
//add_node adds a node to the bottom of the heap
//call heapify on it to bubble it up to the correct position
//because elements is an std::vector, push_back adds size and increases the size
template<class T>
void Heap<T>::add_node(T node){
    elements.push_back(node);
    heapify(elements.size()-1);
}
//pop_node removes and returns the root of the tree
//swap it with the last node in the tree and bubble it up
//to preserve the heap property
template<class T>
T Heap<T>::pop_node(){
    T val = elements.at(0);
    elements.at(0) = elements.back();
    elements.pop_back();
    heapify(elements.size()-1);
    return val;
}
//build_heap bubbles up every leaf using heapify
//bubbling up all the leaves guarantees that the heap property holds
//wikipedia instead bubbles down each non leaf
template<class T>
void Heap<T>::build_heap(){
    for(long unsigned int i = elements.size()/2; i < elements.size(); i++) {
        heapify(i);
    }
}
//heapify checks if a node is less than its parent
//this method will bubble-up the greatest node in the tree
// fails if `>` is not defined on T
template<class T>
void Heap<T>::heapify(int node){
    if(elements.at(node) > elements.at(node / 2)){
        T temp = elements.at(node/ 2);
        elements.at(node / 2) = elements.at(node);
        elements.at(node) = temp;
        heapify(node / 2);
    }
}

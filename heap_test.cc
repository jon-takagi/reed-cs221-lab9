#include "binary_heap.cc"
#include <vector>
#include <iostream>
#include <assert.h>
int main() {
    std::vector<int> args = {1,2,3,4,5,6,7};
    Heap<int> int_heap(args);

    assert(int_heap.size() == 7);
    assert(int_heap.pop_node() == 7);
    assert(int_heap.size() == 6);

    int_heap.add_node(12);
    assert(int_heap.size() == 7);
    assert(int_heap.pop_node() == 12);
    assert(int_heap.size() == 6);
                                //    pi , √2 ,  e  , phi
    std::vector<double> doub_args = {3.14,1.41,2.718,1.618};
    Heap<double> doub_heap(doub_args);
    assert(doub_heap.size() == 4);
    assert(doub_heap.pop_node() == 3.14);
    assert(doub_heap.size() == 3);
                     // lol
    doub_heap.add_node(420.69);
    assert(doub_heap.size() == 4);
    assert(doub_heap.pop_node() == 420.69);
    assert(doub_heap.size() == 3);

}

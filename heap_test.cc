#include "binary_heap.cc"
#include <vector>
#include <iostream>
#include <assert.h>
int main() {
    std::vector<int> args = {1,2,3,4,5,6,7};
    Heap<int> int_heap(args);
    // int_heap.print_nodes();

    assert(int_heap.size() == 7);
    assert(int_heap.pop_node() == 7);
    // std::cout << int_heap.size() << "\n";
    assert(int_heap.size() == 6);

    int_heap.add_node(12);
    // int_heap.print_nodes();
    // std::cout << int_heap.elements.at(0) << "\n";
    assert(int_heap.size() == 7);
    assert(int_heap.pop_node() == 12);
    assert(int_heap.size() == 6);

}

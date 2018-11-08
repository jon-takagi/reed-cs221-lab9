#README
##Contents
1. Compile Instructions
2. Declaration
3. Implementation
4. Testing

### Compile Instructions
The included Makefile will compile `heap_test.cc` into `heap_test`, which can be executed with
`./heap_test`

### Declaration
The Heap<T> class is declared in `binary_heap.hh`. I chose to use a `std::vector` as the underlying array because making an array backed heap is fairly straightforwards, and `std::vector` automatically updates its own size property. The only public members are the required methods described in the assignment. `heapify` and `build_heap` are private because they should only be used internally. The `size` method could be const because it should not modify any data, but the assignment asks for it not to be.

### Implementation
The Heap<T> class is implemented in `binary_heap.cc`. The constructor takes a vector of values but does not assume that the arguments are already ordered as a heap.
`build_heap` bubbles up each leaf using the `heapify` method. It saves time by only examining the leaves, since any non-leaf nodes will be compared to everything below them as their children are bubbled up. At the end of this method, the heap property holds.
`heapify` bubbles up a single node if it is greater than its parent. This method assumes that the `>` exists for the given type. By recursively calling itself, it guarantees that the node reaches the correct height.

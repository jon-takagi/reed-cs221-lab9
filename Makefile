test-htree : heap_test.cc binary_heap.cc binary_heap.hh
	g++ -g -Wall -Wextra -pedantic -Werror -o heap_test heap_test.cc
clean:
	rm -rf *.o

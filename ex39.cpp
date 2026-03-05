// Concept: Pointer Arithmetic
// Reference: Ch 5
// Why: Arithmetic operations on pointers allow navigation through array memory.

#include <iostream>

int main() {
    int arr[] = {1, 2, 3};
    int* p = arr;
    p++;
    std::cout << *p << std::endl;
    return 0;
}

// TODO: Use a pointer to iterate and print all elements of the array.

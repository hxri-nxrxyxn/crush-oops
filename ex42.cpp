// Concept: Array Bounds
// Reference: Ch 5
// Why: C++ does not perform automatic bounds checking, leading to undefined behavior.

#include <iostream>

int main() {
    int arr[2] = {1, 2};
    // std::cout << arr[5]; // DANGEROUS
    return 0;
}

// TODO: Research what happens if you write to arr[5]. (Do not run!)

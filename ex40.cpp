// Concept: Range-based For Loop
// Reference: Ch 5
// Why: Range-based loops provide a safe way to iterate over all elements.

#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4};
    for (int x : arr) std::cout << x << " ";
    return 0;
}

// TODO: Use a reference in the loop (int& x) to modify each element by adding 10.

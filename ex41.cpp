// Concept: std::size()
// Reference: Ch 5
// Why: std::size() (C++17) returns the number of elements in a fixed-size array.

#include <iostream>
#include <iterator>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << std::size(arr) << std::endl;
    return 0;
}

// TODO: Use std::size() in a standard for loop condition.

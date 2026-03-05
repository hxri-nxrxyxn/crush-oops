// Concept: Multi-Dimensional Arrays
// Reference: Ch 5
// Why: C++ supports N-dimensional arrays for complex data structures.

#include <iostream>

int main() {
    int tensor[2][2][2] = {0};
    tensor[1][1][1] = 99;
    std::cout << tensor[1][1][1] << std::endl;
    return 0;
}

// TODO: Change dimensions to 3x3x3 and initialize with 1s.

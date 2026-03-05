#include <iostream>

// ex05: The static_cast Operator
// Concept: Explicit Type Conversion.
// Technical: static_cast ensures type safety and prevents implicit narrowing warnings.

int main() {
    int total = 10;
    int count = 3;
    // Forcing floating-point division
    double average = static_cast<double>(total) / count;
    std::cout << "Average: " << average << std::endl;
    return 0;
}

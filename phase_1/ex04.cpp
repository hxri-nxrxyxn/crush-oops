#include <iostream>
#include <limits>

// ex04: Fundamental Types & Numeric Limits
// Concept: Data Types.
// Technical: Using std::numeric_limits to inspect architectural bounds.

int main() {
    std::cout << "Max Int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Max Double: " << std::numeric_limits<double>::max() << std::endl;
    return 0;
}

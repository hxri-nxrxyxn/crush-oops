// Concept: If-Else
// Reference: Ch 2
// Why: if-else provides conditional branching based on Boolean expressions.

#include <iostream>

int main() {
    int score = 85;
    if (score >= 90) std::cout << "A";
    else std::cout << "B";
    std::cout << std::endl;
    return 0;
}

// TODO: Add an 'else if' block to handle scores >= 70 as 'C'.

#include <iostream>

// ex08: Multi-way Branching (if-else)
// Concept: Selection Statements.
// Technical: Implementing deterministic logic paths based on boolean conditions.

int main() {
    int score = 85;
    if (score >= 90) {
        std::cout << "A" << std::endl;
    } else if (score >= 80) {
        std::cout << "B" << std::endl;
    } else {
        std::cout << "C" << std::endl;
    }
    return 0;
}

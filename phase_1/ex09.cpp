#include <iostream>

// ex09: The Switch Statement
// Concept: Multi-way Integral Selection.
// Technical: Efficient branching for constant integral or enumeration values.

int main() {
    char code = 'B';
    switch (code) {
        case 'A': std::cout << "System Active" << std::endl; break;
        case 'B': std::cout << "System Standby" << std::endl; break;
        default: std::cout << "Unknown State" << std::endl;
    }
    return 0;
}

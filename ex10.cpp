// Concept: Switch Statement
// Reference: Ch 2
// Why: switch provides multi-way branching for integral or enumeration types.

#include <iostream>

int main() {
    char grade = 'B';
    switch(grade) {
        case 'A': std::cout << "Excellence"; break;
        case 'B': std::cout << "Good"; break;
        default: std::cout << "Fail";
    }
    return 0;
}

// TODO: Add a case for 'C' that outputs 'Average'.

// Concept: Void Functions
// Reference: Ch 4
// Why: Void functions perform actions without returning a value.

#include <iostream>

void notify() {
    std::cout << "Task complete." << std::endl;
}

int main() {
    notify();
    return 0;
}

// TODO: Add a return statement 'return;' inside notify() based on a condition.

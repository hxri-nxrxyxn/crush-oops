// Concept: Default Arguments
// Reference: Ch 4
// Why: Default arguments provide values if the caller omits them.

#include <iostream>

void log(int x, int base = 10) {
    std::cout << "Value: " << x << " Base: " << base << std::endl;
}

int main() {
    log(5);
    log(5, 2);
    return 0;
}

// TODO: Add a third parameter with a default value of true for 'verbose' mode.

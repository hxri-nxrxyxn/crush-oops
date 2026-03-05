// Concept: Call-by-Value
// Reference: Ch 4
// Why: Passes a copy of the argument; the original variable remains unchanged.

#include <iostream>

void update(int x) {
    x = 100;
}

int main() {
    int n = 5;
    update(n);
    std::cout << n << std::endl;
    return 0;
}

// TODO: Modify update() to return the new value and assign it to n in main().

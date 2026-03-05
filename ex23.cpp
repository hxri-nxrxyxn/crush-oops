// Concept: Call-by-Reference
// Reference: Ch 4
// Why: References allow a function to modify the original argument directly.

#include <iostream>

void update(int& x) {
    x = 100;
}

int main() {
    int n = 5;
    update(n);
    std::cout << n << std::endl;
    return 0;
}

// TODO: Create a swap() function using call-by-reference to swap two integers.

// Concept: Formal vs Actual Params
// Reference: Ch 4
// Why: Formal parameters are placeholders in definitions; actual parameters (arguments) are passed values.

#include <iostream>

void show(int formal) {
    std::cout << formal << std::endl;
}

int main() {
    int actual = 100;
    show(actual);
    return 0;
}

// TODO: Modify show() to take two parameters and print their sum.

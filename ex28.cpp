// Concept: Pre/Post-conditions
// Reference: Ch 4
// Why: Conditions document expectations before and after function execution.

#include <iostream>

// Precondition: x > 0
// Postcondition: Returns log2 of x
double mock_log(int x) { return 1.0; }

int main() {
    std::cout << mock_log(2) << std::endl;
    return 0;
}

// TODO: Implement a real check using an if-statement for the precondition.

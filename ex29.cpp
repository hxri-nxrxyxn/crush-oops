// Concept: Assertions (cassert)
// Reference: Ch 4
// Why: assert() terminates the program if a logical condition is false.

#include <iostream>
#include <cassert>

int main() {
    int x = 5;
    assert(x > 0);
    std::cout << "Assertion passed" << std::endl;
    return 0;
}

// TODO: Change x to -1 and observe the program behavior.

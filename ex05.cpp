// Concept: Const Qualifier
// Reference: Ch 1
// Why: The const keyword ensures a variable's value cannot be modified after initialization.

#include <iostream>

int main() {
    const double PI = 3.14159;
    std::cout << "PI: " << PI << std::endl;
    return 0;
}

// TODO: Attempt to reassign PI = 3.14 and observe the compiler error.

// Concept: Global Scope
// Reference: Ch 4
// Why: Global variables are accessible from any point in the translation unit.

#include <iostream>

int global_var = 100;

void print_global() {
    std::cout << global_var << std::endl;
}

int main() {
    print_global();
    return 0;
}

// TODO: Modify global_var inside main() and then call print_global().

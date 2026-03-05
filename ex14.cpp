// Concept: Break/Continue
// Reference: Ch 2
// Why: break exits the loop, while continue skips the current iteration.

#include <iostream>

int main() {
    for (int i = 0; i < 10; ++i) {
        if (i == 3) continue;
        if (i == 7) break;
        std::cout << i << " ";
    }
    return 0;
}

// TODO: Modify the logic to skip even numbers and break at 9.

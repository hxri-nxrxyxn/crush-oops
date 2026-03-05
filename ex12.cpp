// Concept: Do-While Loop
// Reference: Ch 2
// Why: The do-while loop guarantees at least one execution of the loop body.

#include <iostream>

int main() {
    int i = 0;
    do {
        std::cout << "Executed ";
    } while (i > 0);
    return 0;
}

// TODO: Modify the code to run the loop exactly 3 times using i as a counter.

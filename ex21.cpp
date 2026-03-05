// Concept: Static Local Variable
// Reference: Ch 4
// Why: Static locals retain their value between successive function calls.

#include <iostream>

void tracker() {
    static int count = 0;
    count++;
    std::cout << count << " ";
}

int main() {
    tracker(); tracker(); tracker();
    return 0;
}

// TODO: Modify tracker() to reset count to 0 if it reaches 5.

// Concept: While Loop
// Reference: Ch 2
// Why: The while loop repeats a block as long as the condition remains true.

#include <iostream>

int main() {
    int count = 0;
    while (count < 5) {
        std::cout << count << " ";
        count++;
    }
    return 0;
}

// TODO: Modify the condition to count down from 10 to 1.

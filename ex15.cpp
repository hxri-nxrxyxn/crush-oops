// Concept: Enum
// Reference: Ch 2
// Why: Enumerations define a set of named integer constants for better readability.

#include <iostream>

int main() {
    enum State { IDLE, RUNNING, STOPPED };
    State current = RUNNING;
    std::cout << "State value: " << current << std::endl;
    return 0;
}

// TODO: Add a new state 'PAUSED' and update 'current' to use it.

// Concept: Private Specifier
// Reference: Ch 6
// Why: Private members can only be accessed by member functions of the same class.

#include <iostream>

class Secret {
    int code = 1234;
public:
    void show() { std::cout << code; }
};

int main() {
    Secret s; s.show();
    return 0;
}

// TODO: Attempt to access s.code directly in main().

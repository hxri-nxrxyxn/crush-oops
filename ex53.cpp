// Concept: Inline Member Functions
// Reference: Ch 6
// Why: Functions defined inside the class body are implicitly inline.

#include <iostream>

class Math {
public:
    int square(int n) { return n * n; }
};

int main() {
    Math m; std::cout << m.square(4) << std::endl;
    return 0;
}

// TODO: Move the definition of square outside the class using the 'inline' keyword.

// Concept: Class vs Struct
// Reference: Ch 6
// Why: Classes have private members by default; structs have public members.

#include <iostream>

class Demo {
    int x = 10; // Private
};

int main() {
    Demo d;
    // std::cout << d.x; // Error
    return 0;
}

// TODO: Change 'class' to 'struct' and see if d.x becomes accessible.

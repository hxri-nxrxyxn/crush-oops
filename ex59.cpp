// Concept: Const Member Functions
// Reference: Ch 6
// Why: Const member functions guarantee they won't modify the object's state.

#include <iostream>

class Data {
    int val = 5;
public:
    int get() const { return val; }
};

int main() {
    const Data d; std::cout << d.get();
    return 0;
}

// TODO: Attempt to modify 'val' inside get() and observe the compiler error.

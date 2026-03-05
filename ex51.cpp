// Concept: Mutator (Setters)
// Reference: Ch 6
// Why: Mutators provide a controlled way to modify private data.

#include <iostream>

class User {
    int id;
public:
    void set_id(int val) { id = val; }
    void print() { std::cout << id; }
};

int main() {
    User u; u.set_id(500); u.print();
    return 0;
}

// TODO: Add validation to set_id() so it only accepts positive integers.

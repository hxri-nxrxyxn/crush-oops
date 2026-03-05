// Concept: Accessor (Getters)
// Reference: Ch 6
// Why: Accessors provide a safe way to retrieve private data without modification.

#include <iostream>

class User {
    int id = 100;
public:
    int get_id() { return id; }
};

int main() {
    User u; std::cout << u.get_id() << std::endl;
    return 0;
}

// TODO: Create a getter for a new private string member 'username'.

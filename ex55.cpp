// Concept: Parameterized Constructor
// Reference: Ch 6
// Why: Parameterized constructors allow object initialization with specific values.

#include <iostream>

class Item {
    int val;
public:
    Item(int v) : val(v) {}
    void show() { std::cout << val; }
};

int main() {
    Item it(42); it.show();
    return 0;
}

// TODO: Create an Item object using 'Item it = 100;' (Implicit conversion).

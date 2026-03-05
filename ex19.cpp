// Concept: Local Scope
// Reference: Ch 4
// Why: Variables declared inside a function are local to that function's scope.

#include <iostream>

void func() {
    int local = 5;
    std::cout << local << std::endl;
}

int main() {
    func();
    return 0;
}

// TODO: Attempt to print 'local' inside main() and observe the scope error.

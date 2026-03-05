// Concept: Namespace std
// Reference: Ch 1
// Why: The using directive allows access to all symbols in the std namespace without prefixes.

#include <iostream>
using namespace std;

int main() {
    cout << "Namespace std active" << endl;
    return 0;
}

// TODO: Remove the 'using' directive and use explicit 'std::' prefixes for cout and endl.

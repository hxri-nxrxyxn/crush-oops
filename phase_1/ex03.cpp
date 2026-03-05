#include <iostream>

// ex03: Namespace Resolution
// Concept: Standard Namespace (std).
// Technical: Using the scope resolution operator (::) to access std components.

int main() {
    // Explicit namespace resolution is preferred over 'using namespace std;'
    std::cout << "Namespace resolution active." << std::endl;
    return 0;
}

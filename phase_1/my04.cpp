#include <iostream>
#include <limits>
int main() {
    std::cout << "max int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "max double: " << std::numeric_limits<double>::max() << std::endl;
    return 0;
}

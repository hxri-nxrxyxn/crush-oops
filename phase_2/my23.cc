#include <iostream>
class Box {
    // note for future hari, this helps you to pass an object to the stdout
    public:
        int width = 5;
        friend std::ostream& operator << (std::ostream& os, Box b) {
            return os << b.width;
        }
};
int main() {
    Box b;
    std::cout << b << std::endl;
    return 0;
}

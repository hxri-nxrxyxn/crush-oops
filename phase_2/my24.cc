#include <iostream>
class Box {
    int width = 5;
    public:
    const int getWidth() {
        return width;
    }
    /*
     * ANSWER: 
     * To call a method on a 'const Box b', the method itself must be marked 
     * 'const' at the end: 'int getWidth() const { ... }'.
     * Your original version 'const int getWidth()' only promises that the 
     * RETURN value is constant, but it doesn't guarantee that the function 
     * won't modify the Box itself. C++ is strict about this!
     */
};
int main() {
    const Box b;
    std::cout << b.getWidth() << std::endl;
    return 0;
}

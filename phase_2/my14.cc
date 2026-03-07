#include <iostream>
class Box {
    public:
        int width;
        /*
         * ANSWER: 
         * This is NOT a constructor because of the 'void' return type.
         * Constructors must have the EXACT same name as the class and 
         * NO return type (not even void). If you add void, C++ treats 
         * it as a regular member function.
         */
        void Box(int w) {
            width = w;
        }
}; // Fixed missing semicolon here too!

int main() {
    Box b(10);
    std::cout << b.width << std::endl;
    return 0;
}

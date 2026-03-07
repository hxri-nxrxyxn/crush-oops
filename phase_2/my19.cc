#include <iostream>
class Math {
    public:
        // what's the point of the keyword inline, while it would simply work without it?
        /*
         * ANSWER: 
         * 1. Performance: It's a request to the compiler to replace function calls 
         *    with the actual code, avoiding the overhead of a function call jump.
         * 2. Header Safety: It allows you to define a function in a header file (.h) 
         *    without causing multiple definition errors during linking.
         */
        inline int sq(int v) {
            return v*v;
        }
};
int main() {
    Math m;
    std::cout << m.sq(2) << std::endl;
    return 0;
}

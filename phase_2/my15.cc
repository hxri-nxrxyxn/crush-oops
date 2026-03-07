#include <iostream>
class Box {
    int width;
    public:
        // why do we choose to use this wierd naming convention when we can just do:
        // void Box(int w) {
        //      width = w;
        // }
        /*
         * ANSWER: 
         * This is the Member Initializer List. 
         * 1. Efficiency: It initializes the variable 'width' directly when the object 
         *    is created, avoiding the double-step of default-initialization followed 
         *    by assignment.
         * 2. Necessity: This is the ONLY way to initialize 'const' or reference 
         *    member variables.
         */
        Box(int w) : width(w){};
        int getwidth() {
            return width;
        }
};
int main() {
    Box b(10);
    std::cout << b.getwidth() << std::endl;
    return 0;
}

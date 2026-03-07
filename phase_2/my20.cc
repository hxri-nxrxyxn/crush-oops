#include <iostream>
class Box {
    int width = 10;
    public:
        friend void show(Box b);
};

void show(Box b) {
    std::cout << b.width << std::endl;
}

int main() {
    // no clue how the next line works, i see no object initialisation!?
    /*
     * ANSWER: 
     * show(Box()) creates a Temporary/Anonymous object. It's an object 
     * created without a name that exists only for that line of code.
     * It's like calling print(5) instead of int x = 5; print(x).
     */
    show(Box());
    return 0;
}

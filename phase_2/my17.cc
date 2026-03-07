#include <iostream>
class Box {
    int width = 5;
    public:
    const int getWidth(){
        return width;
    }
};
int main() {
    Box b;
    std::cout << b.getWidth() << std::endl;
    return 0;
}

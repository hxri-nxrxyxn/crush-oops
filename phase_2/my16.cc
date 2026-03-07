#include <iostream>
class Box {
    public:
        int width;
        int height;
        Box():
            width(2),
            height(3){};
};

int main() {
    Box b;
    std::cout << b.width << std::endl;
    std::cout << b.height << std::endl;
    return 0;
}

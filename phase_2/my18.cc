#include <iostream>
class Box{
    public:
    int width = 0;
    void setWidth(int w) {
        if (w > width) {
            width = w;
        }
    }
};
int main() {
    Box b;
    std::cout << b.width << std::endl;
    b.setWidth(5);
    std::cout << b.width << std::endl;
    return 0;
}

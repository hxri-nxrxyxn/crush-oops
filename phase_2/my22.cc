#include <iostream>
class Box {
    public:
        int width;
        Box(int w): width(w) {}
        bool operator == (Box b) {
           return width == b.width;
        }
};
int main() {
    Box a(1), b(1);
    if (a==b) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }
    return 0;
}

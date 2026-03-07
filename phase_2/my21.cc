#include <iostream>
class Box {
    public:
        int width;
        Box(int w): width(w) {}
        // see the magic of operator overloading
        int operator + (Box b) {
            return width * b.width;
        }
};
int main() {
    Box a(4), b(2);
    std::cout << a+b << std::endl;
    return 0;
}

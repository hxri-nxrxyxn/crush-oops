#include <iostream>
class Rectangle {
    public:int width;
};

int main() {
    Rectangle r;
    r.width = 30;
    std::cout << r.width << std::endl;
    return 0;
}

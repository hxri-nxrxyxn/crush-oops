#include <iostream>
class Rectangle {
    int width;
    public: 
        void setWidth(int w) {
            width = w; 
        }
        int getWidth() {
            return width;
        }
};

int main() {
    Rectangle r;
    r.setWidth(3);
    std::cout << r.getWidth() << std::endl;
    return 0;
}

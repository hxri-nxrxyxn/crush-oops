#include <iostream>
#include <string>
struct Point {
    int a, b;
    // string c;
};

int main() {
    Point p{1, 2};
    // Point p{1, 2, "something"}
    std::cout << p.a << p.b << std::endl;
    // std::cout << p.a << p.b << p.c << std::endl;
    // why does the commented part not work?
    /* 
     * ANSWER: 
     * 1. Aggregate Initialization: The initializer list {1, 2, "something"} must match 
     *    the members of the struct. Since Point only has 'a' and 'b', adding a 
     *    third value fails.
     * 2. Header Missing: If you uncomment 'string c', you must #include <string>.
     */
    return 0;
}

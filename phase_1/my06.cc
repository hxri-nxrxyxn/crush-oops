#include <iostream>
#include <iomanip>
int main() {
    double num = 987.765432;
    std::cout << std::fixed << std::setprecision(2) << num << std::endl;
    std::cout << num << std::endl;
    std::cout << std::setw(15) << std::setfill('*') << num << std::endl;
    return 0;
}

#include <iostream>
int main(){
    int state = 'C';
    switch (state) {
        case 'A': std::cout << "System ON" << std::endl; break;
        case 'B': std::cout << "System OFF" << std::endl; break;
        default: std::cout << "System Unstable";
    }
    return 0;
}

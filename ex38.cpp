// Concept: Array-to-Pointer Decay
// Reference: Ch 5
// Why: Array names implicitly convert (decay) to a pointer to the first element.

#include <iostream>

int main() {
    int arr[] = {10, 20};
    int* p = arr;
    std::cout << *p << " " << *(p+1) << std::endl;
    return 0;
}

// TODO: Print the address of arr and p to show they are identical.

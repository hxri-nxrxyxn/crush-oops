// Concept: Partial Initialization
// Reference: Ch 5
// Why: Unspecified elements in an initializer list are zero-initialized.

#include <iostream>

int main() {
    int arr[10] = {1, 2};
    for(int i=0; i<5; ++i) std::cout << arr[i] << " ";
    return 0;
}

// TODO: Initialize an array of 100 ints to all zeros using '{0}'.

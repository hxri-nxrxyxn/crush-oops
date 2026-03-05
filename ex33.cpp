// Concept: Accessing Array Elements
// Reference: Ch 5
// Why: Zero-based indexing is used to access and modify array elements.

#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    for(int i=0; i<3; ++i) std::cout << arr[i] << " ";
    return 0;
}

// TODO: Update the second element to 50 and reprint the array.

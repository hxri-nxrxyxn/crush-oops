// Concept: Const Array Params
// Reference: Ch 5
// Why: The const qualifier prevents a function from modifying the passed array.

#include <iostream>

void read_only(const int a[], int size) {
    // a[0] = 5; // Error
    std::cout << a[0] << std::endl;
}

int main() {
    int arr[] = {10};
    read_only(arr, 1);
    return 0;
}

// TODO: Attempt to modify an element in read_only() and observe the error.

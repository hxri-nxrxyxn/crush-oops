// Concept: Array as Function Param
// Reference: Ch 5
// Why: Arrays are passed as pointers to their first element.

#include <iostream>

void print_arr(int a[], int size) {
    for(int i=0; i<size; ++i) std::cout << a[i] << " ";
}

int main() {
    int arr[] = {1, 2, 3};
    print_arr(arr, 3);
    return 0;
}

// TODO: Modify print_arr to double each value in the array before printing.

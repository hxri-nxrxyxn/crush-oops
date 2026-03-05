// Concept: Selection Sort Logic
// Reference: Ch 5
// Why: Selection sort finds the minimum and swaps it to the front.

#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {5, 2, 8};
    if (arr[1] < arr[0]) std::swap(arr[0], arr[1]);
    std::cout << arr[0] << " " << arr[1] << std::endl;
    return 0;
}

// TODO: Complete the logic to sort the entire 3-element array.

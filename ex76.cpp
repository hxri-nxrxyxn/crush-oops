// Concept: Dynamic Arrays
// Reference: Ch 10
// Why: Dynamic arrays allow run-time determination of collection sizes.
// BUG ALERT: // BUG ALERT: Using 'delete' instead of 'delete[]' for arrays, causing leaks.

int main() { int* arr = new int[5]; arr[0] = 1; delete[] arr; return 0; }

// TODO: Initialize all 5 elements to zero using a loop.

// Concept: Pointer Arithmetic
// Reference: Ch 10
// Why: Arithmetic on pointers facilitates manual memory traversal.
// BUG ALERT: // BUG ALERT: Incrementing a pointer past the allocated array bounds.

int main() { int* a = new int[2]{1,2}; int x = *(a+1); delete[] a; return x; }

// TODO: Use pointer increment (ptr++) to traverse and print both elements.

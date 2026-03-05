// Concept: Pointer Basics
// Reference: Ch 10
// Why: Pointers store memory addresses, enabling direct hardware/memory interaction.
// BUG ALERT: // BUG ALERT: Dereferencing an uninitialized (wild) pointer.

int main() { int val = 100; int* ptr = &val; *ptr = 200; return val; }

// TODO: Print the address stored in ptr using cout.

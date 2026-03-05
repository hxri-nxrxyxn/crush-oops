// ex31.cpp: Memory Leaks
// Concept: Memory Leaks
// Technical: Failing to delete.

void leak() { int* p = new int; } int main() { leak(); return 0; }

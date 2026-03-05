// ex40.cpp: Dangling Pointers
// Concept: Dangling Pointers
// Technical: Use after free.

int main() { int* p = new int; delete p; p = nullptr; return 0; }

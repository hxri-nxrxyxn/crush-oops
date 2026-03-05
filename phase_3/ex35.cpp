// ex35.cpp: Destructors
// Concept: Destructors
// Technical: Automated cleanup.

class A { int* p; public: A(){p=new int;} ~A(){delete p;} }; int main() { A a; return 0; }

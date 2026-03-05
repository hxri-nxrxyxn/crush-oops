// ex37.cpp: Assignment Op
// Concept: Assignment Op
// Technical: Deep copy assignment.

class A { int* p; public: A(){p=new int;} A& operator=(const A& o){ *p=*o.p; return *this; } ~A(){delete p;} }; int main(){ return 0; }

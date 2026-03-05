// ex44.cpp: Protected
// Concept: Protected
// Technical: Subclass access.

class Base{protected: int x;}; class Derived:public Base{public: void set(){x=1;}}; int main(){return 0;}

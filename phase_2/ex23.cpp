// ex23.cpp: Overload <<
// Concept: Overload <<
// Technical: Stream output.

#include<iostream>
class Num { int v=5; friend std::ostream& operator<<(std::ostream& os, Num n){return os<<n.v;} };
int main(){ Num n; std::cout<<n; return 0;}

// ex56.cpp: Standard Exceptions
// Concept: Standard Exceptions
// Technical: std::runtime_error.

#include<stdexcept>
int main(){ try{ throw std::runtime_error("E");} catch(std::exception& e){} return 0;}

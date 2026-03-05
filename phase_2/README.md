# Phase 2: Object Design (Chapters 6-8)

## Theoretical Concepts
Object-Oriented Programming (OOP) shifts the focus from purely algorithmic procedures to the modeling of domain entities. 
1. **Encapsulation:** The bundling of data (attributes) and the methods (behaviors) that operate on them within a single unit (class), while restricting direct access to some of the object's components.
2. **Constructors:** Special member functions invoked automatically upon object creation to establish a valid initial state.
3. **Operator Overloading:** Providing custom implementations for standard C++ operators (e.g., `+`, `==`, `<<`) to integrate user-defined types intuitively with the core language.

## Glossary
*   **Access Specifier:** Keywords (`public`, `private`, `protected`) that dictate the visibility and accessibility of class members.
*   **Friend Function:** A non-member function granted explicit access to a class's private and protected members.
*   **Default Constructor:** A constructor that can be called with no arguments.
*   **Mutator/Accessor:** Methods (Setters/Getters) used to modify or retrieve the state of encapsulated data securely.

## Code Snippets
### Constructor Initialization List
```cpp
class Ledger {
    double balance;
public:
    Ledger(double b) : balance(b) {} // Highly efficient initialization
};
```

## The Pitfalls: Common Bugs for Beginners
*   **Public Data Members:** Exposing internal state (making variables `public`) breaks encapsulation, making the system fragile.
*   **Shadowing in Constructors:** Using the same name for a parameter and a member variable without using `this->` or an initialization list.
*   **Overloading As Members vs Friends:** Attempting to overload binary operators (like `<<`) as member functions when the left operand is not of the class type (e.g., `std::ostream`).

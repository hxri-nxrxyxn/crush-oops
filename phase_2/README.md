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

---

## Beginner's Guide to Object Design

To help you recollect the core concepts of OOP from Phase 2:

### 1. Structs vs. Classes
In C++, a `struct` and a `class` are almost identical. The only difference is the **default access**:
*   **Struct:** Members are `public` by default. Good for simple data bundles.
*   **Class:** Members are `private` by default. Best for complex objects that need to protect their data.

### 2. The Constructor Rule
Constructors are special functions that "build" your object.
*   They must have the **exact same name** as the class.
*   They **cannot have a return type** (not even `void`).
*   If you don't write one, C++ provides a "Default Constructor" for you (unless you've defined other constructors).

### 3. Member Initializer Lists (`: var(val)`)
This is the "colon syntax" after the constructor name. 
*   **Efficiency:** It initializes variables directly at creation, which is faster than assigning values inside the `{}` brackets.
*   **Requirement:** It is mandatory for initializing `const` or reference members.

### 4. `const` Methods
Adding `const` to the end of a method (e.g., `int get() const`) is a promise: "This function will not change any data inside the object."
*   If an object is declared as `const`, you **can only** call methods that are marked with `const`.

### 5. Friend Functions
Sometimes a function outside the class needs to see "private" data (like the `<<` operator). Marking a function as a `friend` inside the class gives it a "backstage pass" to access private members.

### 6. Operator Overloading
You can make C++ operators (`+`, `==`, `<<`) work with your own classes. 
*   **Note:** When overloading `<<`, it's almost always done as a `friend` function because the left side is a stream (`std::cout`), not your object.

### 7. Scope Resolution (`::`)
You don't have to write all your code inside the class definition. You can declare a function inside the class and define it outside using the `::` operator:
```cpp
void MyClass::doSomething() { ... }
```


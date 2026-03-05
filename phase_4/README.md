# Phase 4: Software Architecture (Chapters 11-16)

## Theoretical Concepts
To scale C++ projects, code must be organized and designed for extension. 
1. **Separate Compilation:** Splitting declarations (`.h`/`.hpp`) from definitions (`.cpp`) to optimize compilation times and encapsulate implementation details.
2. **Inheritance:** An 'is-a' relationship allowing new classes to inherit attributes and behaviors from existing ones, promoting code reuse.
3. **Polymorphism & Virtual Functions:** The ability to treat objects of different derived classes through a common base-class pointer, enabling dynamic method dispatch at runtime.
4. **Templates:** C++'s mechanism for generic programming, allowing functions and classes to operate on any data type.

## Glossary
*   **Header Guard:** Preprocessor directives (`#ifndef`, `#define`, `#endif`) used to prevent a header file from being included multiple times in the same translation unit.
*   **Virtual Function:** A base class method declared with `virtual`, signaling that it can be overridden in derived classes and resolved dynamically.
*   **Pure Virtual Function:** A virtual function with no implementation (`= 0`), making the class abstract (cannot be instantiated).
*   **Template Parameter:** A placeholder for a type (e.g., `template <typename T>`) resolved at compile time.

## Code Snippets
### Polymorphism via Virtual Functions
```cpp
class Base {
public:
    virtual void speak() const { std::cout << "Base"; }
    virtual ~Base() = default; // Essential for base classes
};
```

## The Pitfalls: Common Bugs for Beginners
*   **Missing Virtual Destructor:** Deleting a derived class object through a base class pointer without a virtual destructor causes undefined behavior (derived destructors are not called).
*   **Object Slicing:** Assigning a derived object to a base object *by value* slices off the derived-specific data. Always use pointers or references for polymorphism.
*   **Template Linkage Errors:** Defining template functions in a `.cpp` file. Templates must generally be fully defined in headers because the compiler needs the implementation to instantiate them for specific types.

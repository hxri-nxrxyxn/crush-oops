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

---

## Beginner's Guide to Software Architecture

Phase 4 is about organizing your code so it can grow without breaking. Here are the core pillars:

### 1. Namespaces and Header Guards
*   **Namespaces (`namespace {}`):** Think of these as folders for your code. They prevent "name collisions" (e.g., having two different `Box` classes in the same project).
*   **Header Guards:** Essential in `.h` files. They stop the compiler from "reading the same file twice," which would cause "redefinition" errors.

### 2. Inheritance: The "Is-A" Rule
Inheritance (`class Derived : public Base`) means a `Dog` **is a** `Animal`. 
*   **`protected`**: A special level of privacy. `private` is for this class only; `protected` allows your children (subclasses) to see the data too.
*   **Base Constructors:** A child cannot exist without its parent. You often need to call the parent's constructor using the initializer list: `Derived() : Base(10) {}`.

### 3. Polymorphism: The Magic of `virtual`
This is the most powerful part of OOP. It allows you to treat different objects (Dog, Cat) as a general `Animal` pointer.
*   **`virtual`**: Tells C++, "Look at the actual object type at runtime, not just the pointer type."
*   **`override`**: A safety label. It tells the compiler, "I am intentionally replacing a parent's function."
*   **Virtual Destructor:** **CRITICAL.** If you have any virtual functions, your destructor **must** be virtual. Otherwise, when you `delete` an object, the "child" parts might not be cleaned up, causing memory leaks.

### 4. Abstract Classes (`= 0`)
If a function is marked `virtual void speak() = 0;`, it is **Pure Virtual**. This means the class is an "Idea" (like `Shape`) and cannot be created directly. You **must** create a specific child (like `Circle`) that implements the function.

### 5. Templates: The "Blueprints"
Instead of writing one function for `int` and another for `double`, you write a **Template**:
```cpp
template<typename T>
T add(T a, T b) { return a + b; } // Works for any type that supports '+'
```

### 6. Modern C++ Tools
*   **`std::vector`**: The professional version of an array. It grows automatically and manages its own memory.
*   **`auto`**: Let the compiler guess the type. Great for long, complex types like iterators.
*   **Exceptions (`try/catch`)**: A way to "signal" that something went wrong without crashing the whole program immediately.


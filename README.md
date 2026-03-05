# CCU-CSIE OOP Mastery: A Modern C++ Textbook

This repository is a structured, academic-grade textbook and exercise set for Walter Savitch’s *Absolute C++* (7th Ed). It is organized into four distinct phases, transitioning from procedural foundations to advanced software architecture.

---

## Phase 1: Procedural Mastery (Chapters 1-5)
| File | Concept | Technical "Why" |
| :--- | :--- | :--- |
| [`ex01.cpp`](./phase_1/ex01.cpp) | Stream Insertion | Standard Output stream (cout). |
| [`ex02.cpp`](./phase_1/ex02.cpp) | Stream Extraction | Standard Input stream (cin). |
| [`ex03.cpp`](./phase_1/ex03.cpp) | Namespace Resolution | Explicit std:: prefixing for clarity. |
| [`ex04.cpp`](./phase_1/ex04.cpp) | Data Types | Inspecting architectural numeric limits. |
| [`ex05.cpp`](./phase_1/ex05.cpp) | static_cast | Safe, explicit type conversion. |
| [`ex06.cpp`](./phase_1/ex06.cpp) | I/O Formatting | Using iomanip for precise display. |
| [`ex08.cpp`](./phase_1/ex08.cpp) | Short-Circuiting | Efficiency in logical evaluation. |
| [`ex09.cpp`](./phase_1/ex09.cpp) | Switch Statements | Multi-way branching for integral types. |
| [`ex10.cpp`](./phase_1/ex10.cpp) | For-Loop | Counter-controlled iterations. |

## Phase 2: Object Design (Chapters 6-8)
| File | Concept | Technical "Why" |
| :--- | :--- | :--- |
| [`ex11.cpp`](./phase_2/ex11.cpp) | Structs | Groups public data natively. |
| [`ex12.cpp`](./phase_2/ex12.cpp) | Classes & Private | Foundations of data hiding. |
| [`ex13.cpp`](./phase_2/ex13.cpp) | Public Methods | Defining the class interface. |
| [`ex14.cpp`](./phase_2/ex14.cpp) | Constructors | Enforcing initial object state. |
| [`ex15.cpp`](./phase_2/ex15.cpp) | Init Lists | Efficient field initialization. |
| [`ex16.cpp`](./phase_2/ex16.cpp) | Default Constructor | Handling zero-argument creation. |
| [`ex17.cpp`](./phase_2/ex17.cpp) | Accessors | Read-only state retrieval. |
| [`ex18.cpp`](./phase_2/ex18.cpp) | Mutators | Controlled state modification. |
| [`ex19.cpp`](./phase_2/ex19.cpp) | Inline Functions | Performance hints for compiler. |
| [`ex20.cpp`](./phase_2/ex20.cpp) | Friend Functions | External access to private data. |
| [`ex21.cpp`](./phase_2/ex21.cpp) | Overload + | Intuitive addition for objects. |
| [`ex22.cpp`](./phase_2/ex22.cpp) | Overload == | Structural equality comparisons. |
| [`ex23.cpp`](./phase_2/ex23.cpp) | Overload << | Standardized object printing. |
| [`ex24.cpp`](./phase_2/ex24.cpp) | Const Methods | Object-state immutability. |
| [`ex25.cpp`](./phase_2/ex25.cpp) | Scope Resolution | Decoupling declaration from definition. |

## Phase 3: Memory Management (Chapters 9-10)
| File | Concept | Technical "Why" |
| :--- | :--- | :--- |
| [`ex26.cpp`](./phase_3/ex26.cpp) | Pointers | Storing and using memory addresses. |
| [`ex27.cpp`](./phase_3/ex27.cpp) | Dereferencing | Accessing values at an address. |
| [`ex28.cpp`](./phase_3/ex28.cpp) | Nullptr | Type-safe null pointer literal. |
| [`ex29.cpp`](./phase_3/ex29.cpp) | Dynamic Alloc | Manual heap allocation with new. |
| [`ex30.cpp`](./phase_3/ex30.cpp) | Dynamic Arrays | Allocating contiguous heap blocks. |
| [`ex31.cpp`](./phase_3/ex31.cpp) | Memory Leaks | The result of missing delete calls. |
| [`ex32.cpp`](./phase_3/ex32.cpp) | Arrow Operator | Member access through pointers. |
| [`ex33.cpp`](./phase_3/ex33.cpp) | this Pointer | Explicit instance self-reference. |
| [`ex34.cpp`](./phase_3/ex34.cpp) | this Chaining | Facilitating concatenated calls. |
| [`ex35.cpp`](./phase_3/ex35.cpp) | Destructors | RAII resource cleanup. |
| [`ex36.cpp`](./phase_3/ex36.cpp) | Copy Constructor | Ensuring deep copies of memory. |
| [`ex37.cpp`](./phase_3/ex37.cpp) | Assignment Op | Deep copy during re-assignment. |
| [`ex38.cpp`](./phase_3/ex38.cpp) | Rule of Three | Managing the lifecycle of dynamic data. |
| [`ex39.cpp`](./phase_3/ex39.cpp) | Pointer Arith | Manual memory block traversal. |
| [`ex40.cpp`](./phase_3/ex40.cpp) | Dangling Pointers | Managing pointers after deletion. |

## Phase 4: Software Architecture (Chapters 11-16)
| File | Concept | Technical "Why" |
| :--- | :--- | :--- |
| [`ex41.cpp`](./phase_4/ex41.cpp) | Namespaces | Logical code grouping and collision avoidance. |
| [`ex42.cpp`](./phase_4/ex42.cpp) | Header Guards | Preventing multiple inclusion errors. |
| [`ex43.cpp`](./phase_4/ex43.cpp) | Inheritance | Implementing 'is-a' relationships. |
| [`ex44.cpp`](./phase_4/ex44.cpp) | Protected | Granting access to derived subclasses. |
| [`ex45.cpp`](./phase_4/ex45.cpp) | Overriding | Redefining base class behaviors. |
| [`ex46.cpp`](./phase_4/ex46.cpp) | Base Constructors | Initializing the parent class first. |
| [`ex47.cpp`](./phase_4/ex47.cpp) | Virtual Funcs | Enabling dynamic method dispatch. |
| [`ex48.cpp`](./phase_4/ex48.cpp) | Polymorphism | Uniform interface for derived types. |
| [`ex49.cpp`](./phase_4/ex49.cpp) | Virtual Dtor | Safe destruction through base pointers. |
| [`ex50.cpp`](./phase_4/ex50.cpp) | Abstract Classes | Forcing subclass implementation (Pure virtual). |
| [`ex51.cpp`](./phase_4/ex51.cpp) | Object Slicing | The risk of passing polymorphic types by value. |
| [`ex52.cpp`](./phase_4/ex52.cpp) | Templates | Generic, type-agnostic programming. |
| [`ex53.cpp`](./phase_4/ex53.cpp) | Template Classes | Generic data structures. |
| [`ex54.cpp`](./phase_4/ex54.cpp) | Exceptions | Handling runtime error paths. |
| [`ex55.cpp`](./phase_4/ex55.cpp) | Multiple Catch | Type-specific exception handling. |
| [`ex56.cpp`](./phase_4/ex56.cpp) | std::exception | Inheriting from standard error types. |
| [`ex57.cpp`](./phase_4/ex57.cpp) | Vectors | Using std::vector for dynamic sequences. |
| [`ex58.cpp`](./phase_4/ex58.cpp) | Iterators | Navigating STL containers. |
| [`ex59.cpp`](./phase_4/ex59.cpp) | Auto | Type inference for complex types. |
| [`ex60.cpp`](./phase_4/ex60.cpp) | Separate Comp | Decoupling compilation units. |

## Standards
- All code is **C++17 compliant**.
- Minimalist, high-signal examples (Katas).
- Professional, technical documentation.

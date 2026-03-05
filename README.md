# Savitch "Absolute C++" (Chapters 1-10) Roadmap

This roadmap maps the incremental exercises (`ex01.cpp` to `ex80.cpp`) to the core concepts of the first ten chapters.

## Phase 1: Basic I/O & Control Flow (Chapters 1-3)
| File | Concept | Chapter | Technical "Why" |
| :--- | :--- | :--- | :--- |
| `ex01.cpp` | Standard Output | Ch 1 | `cout` facilitates stream-based output to the console. |
| `ex02.cpp` | Standard Input | Ch 1 | `cin` extracts formatted data from the standard input stream. |
| `ex03.cpp` | Namespace `std` | Ch 1 | The `using` directive allows access to all symbols in the `std` namespace without prefixes. |
| `ex04.cpp` | Fundamental Types | Ch 1 | C++ provides built-in types for integer, floating-point, and character data. |
| `ex05.cpp` | `const` Qualifier | Ch 1 | The `const` keyword ensures a variable's value cannot be modified after initialization. |
| `ex06.cpp` | `setw()` | Ch 2 | `setw()` sets the field width for the next output operation, aiding in alignment. |
| `ex07.cpp` | `setprecision()` | Ch 2 | `setprecision()` controls the number of digits displayed for floating-point values. |
| `ex08.cpp` | Bool Type | Ch 2 | The `bool` type represents logical true or false states. |
| `ex09.cpp` | If-Else | Ch 2 | `if-else` provides conditional branching based on Boolean expressions. |
| `ex10.cpp` | Switch Statement | Ch 2 | `switch` provides multi-way branching for integral or enumeration types. |
| `ex11.cpp` | While Loop | Ch 2 | The `while` loop repeats a block as long as the condition remains true. |
| `ex12.cpp` | Do-While Loop | Ch 2 | The `do-while` loop guarantees at least one execution of the loop body. |
| `ex13.cpp` | For Loop | Ch 2 | The `for` loop provides a compact syntax for counter-controlled iteration. |
| `ex14.cpp` | Break/Continue | Ch 2 | `break` exits the loop, while `continue` skips the current iteration. |
| `ex15.cpp` | Enum | Ch 2 | Enumerations define a set of named integer constants for better readability. |

## Phase 2: Functions & Scope (Chapter 4)
| File | Concept | Chapter | Technical "Why" |
| :--- | :--- | :--- | :--- |
| `ex16.cpp` | Function Prototype | Ch 4 | Prototypes inform the compiler of a function's signature before its definition. |
| `ex17.cpp` | Function Definition | Ch 4 | The definition contains the actual implementation logic of the function. |
| `ex18.cpp` | Formal vs Actual Params | Ch 4 | Formal parameters are placeholders in definitions; actual parameters (arguments) are passed values. |
| `ex19.cpp` | Local Scope | Ch 4 | Variables declared inside a function are local to that function's scope. |
| `ex20.cpp` | Global Scope | Ch 4 | Global variables are accessible from any point in the translation unit. |
| `ex21.cpp` | Static Local Variable | Ch 4 | Static locals retain their value between successive function calls. |
| `ex22.cpp` | Call-by-Value | Ch 4 | Passes a copy of the argument; the original variable remains unchanged. |
| `ex23.cpp` | Call-by-Reference | Ch 4 | References allow a function to modify the original argument directly. |
| `ex24.cpp` | Default Arguments | Ch 4 | Default arguments provide values if the caller omits them. |
| `ex25.cpp` | Function Overloading | Ch 4 | Multiple functions can share a name if their parameter lists differ. |
| `ex26.cpp` | Math Library | Ch 4 | The `cmath` library provides standard mathematical functions. |
| `ex27.cpp` | Type Casting | Ch 4 | `static_cast` converts values between compatible types safely. |
| `ex28.cpp` | Pre/Post-conditions | Ch 4 | Conditions document expectations before and after function execution. |
| `ex29.cpp` | Assertions | Ch 4 | `assert()` terminates the program if a logical condition is false. |
| `ex30.cpp` | Void Functions | Ch 4 | Void functions perform actions without returning a value. |

## Phase 3: Arrays & Pointer Basics (Chapter 5)
| File | Concept | Chapter | Technical "Why" |
| :--- | :--- | :--- | :--- |
| `ex31.cpp` | Array Declaration | Ch 5 | Arrays store multiple elements of the same type in contiguous memory. |
| `ex32.cpp` | Array Initialization | Ch 5 | Brace initialization sets initial values during array declaration. |
| `ex33.cpp` | Accessing Elements | Ch 5 | Zero-based indexing is used to access and modify array elements. |
| `ex34.cpp` | Array as Param | Ch 5 | Arrays are passed as pointers to their first element. |
| `ex35.cpp` | Const Array Params | Ch 5 | The `const` qualifier prevents a function from modifying the passed array. |
| `ex36.cpp` | 2D Arrays | Ch 5 | Two-dimensional arrays represent tabular data or matrices. |
| `ex37.cpp` | Multi-Dim Arrays | Ch 5 | C++ supports N-dimensional arrays for complex data structures. |
| `ex38.cpp` | Array-to-Pointer Decay| Ch 5 | Array names implicitly convert (decay) to a pointer to the first element. |
| `ex39.cpp` | Pointer Arithmetic | Ch 5 | Arithmetic operations on pointers allow navigation through array memory. |
| `ex40.cpp` | Range-based For Loop | Ch 5 | Range-based loops provide a safe way to iterate over all elements. |
| `ex41.cpp` | `std::size()` | Ch 5 | `std::size()` (C++17) returns the number of elements in a fixed-size array. |
| `ex42.cpp` | Array Bounds | Ch 5 | C++ does not perform automatic bounds checking, leading to UB. |
| `ex43.cpp` | Partial Init | Ch 5 | Unspecified elements in an initializer list are zero-initialized. |
| `ex44.cpp` | Selection Sort Logic | Ch 5 | Selection sort finds the minimum and swaps it to the front. |
| `ex45.cpp` | C-Strings | Ch 5 | C-strings are null-terminated character arrays. |

## Phase 4: Structs & Classes (Chapter 6)
| File | Concept | Chapter | Technical "Why" |
| :--- | :--- | :--- | :--- |
| `ex46.cpp` | Struct Basics | Ch 6 | Structs group related data members; members are public by default. |
| `ex47.cpp` | Nested Structs | Ch 6 | Structs can contain other structs as members for hierarchy. |
| `ex48.cpp` | Class vs Struct | Ch 6 | Classes have private members by default; structs have public. |
| `ex49.cpp` | Public Specifier | Ch 6 | Public members are accessible from outside the class. |
| `ex50.cpp` | Private Specifier | Ch 6 | Private members can only be accessed by member functions of the same class. |
| `ex51.cpp` | Mutator (Setters) | Ch 6 | Mutators provide a controlled way to modify private data. |
| `ex52.cpp` | Accessor (Getters) | Ch 6 | Accessors provide a safe way to retrieve private data without modification. |
| `ex53.cpp` | Inline Member Funcs | Ch 6 | Functions defined inside the class body are implicitly inline. |
| `ex54.cpp` | Default Constructor | Ch 6 | The default constructor initializes objects without arguments. |
| `ex55.cpp` | Param Constructor | Ch 6 | Parameterized constructors allow object initialization with specific values. |
| `ex56.cpp` | Constructor Init List| Ch 6 | Init lists are more efficient than assignment in the constructor body. |
| `ex57.cpp` | Delegating Constructors| Ch 6 | One constructor can call another in the same class to reduce redundancy. |
| `ex58.cpp` | `this` Pointer | Ch 6 | The `this` pointer refers to the current object instance. |
| `ex59.cpp` | Const Member Funcs | Ch 6 | Const member functions guarantee they won't modify the object's state. |
| `ex60.cpp` | Scope Resolution `::`| Ch 6 | The `::` operator is used to define member functions outside the class. |

## Phase 5: Operator Overloading & Dynamic Memory (Chapters 8 & 10)
| File | Concept | Chapter | Technical "Why" |
| :--- | :--- | :--- | :--- |
| `ex61.cpp` | Friend Functions | Ch 8 | Friend functions access private members without being member functions. |
| `ex62.cpp` | Overloading `+` | Ch 8 | Binary operator overloading allows intuitive syntax for object combining. |
| `ex63.cpp` | Overloading `-` | Ch 8 | Arithmetic overloading facilitates domain-specific logic like debt calculation. |
| `ex64.cpp` | Overloading `==` | Ch 8 | Equality overloading is essential for generic algorithm compatibility. |
| `ex65.cpp` | Overloading `<<` | Ch 8 | Streaming output enables standardized object visualization. |
| `ex66.cpp` | Overloading `>>` | Ch 8 | Streaming input allows direct object population from streams. |
| `ex67.cpp` | Overloading Unary `-` | Ch 8 | Unary operators can represent state negation like accounting debt. |
| `ex68.cpp` | Overloading `[]` | Ch 8 | Subscript overloading provides safe access to internal collection data. |
| `ex69.cpp` | Pointer Basics | Ch 10 | Pointers store memory addresses, enabling direct hardware interaction. |
| `ex70.cpp` | Pointer to Class | Ch 10 | Object pointers are the foundation of dynamic memory and polymorphism. |
| `ex71.cpp` | The Arrow Operator `->`| Ch 10 | The `->` operator is shorthand for dereferencing and member access. |
| `ex72.cpp` | `this` Pointer Basics | Ch 10 | The `this` pointer allows an object to refer to itself explicitly. |
| `ex73.cpp` | `this` for Chaining | Ch 10 | Returning `*this` allows for fluid, concatenated function calls. |
| `ex74.cpp` | `new` Operator | Ch 10 | `new` allocates memory on the heap, persisting beyond scope. |
| `ex75.cpp` | `delete` Operator | Ch 10 | `delete` prevents memory leaks by releasing heap-allocated memory. |
| `ex76.cpp` | Dynamic Arrays | Ch 10 | Dynamic arrays allow run-time determination of collection sizes. |
| `ex77.cpp` | Dynamic Object Arrays | Ch 10 | Arrays of objects on the heap require default constructors. |
| `ex78.cpp` | Pointer Arithmetic | Ch 10 | Arithmetic on pointers facilitates manual memory traversal. |
| `ex79.cpp` | Memory Leak Scenario | Ch 10 | Leaks occur when the last pointer to heap memory is lost. |
| `ex80.cpp` | Destructor & `delete` | Ch 10 | Destructors automate cleanup of dynamic resources during object death. |

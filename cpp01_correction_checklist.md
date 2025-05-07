# Cpp Module 01 (42)

This module is designed to help you understand memory allocation, references, pointers to members, and the usage of the switch statement in C++.

- **0**: The goal of this exercise is to understand how to allocate memory in C++.
- **1**: The goal of this exercise is to allocate a number of objects at the same time using new[], initialize them, and to properly delete them.
- **2**: The goal of this exercise is to Demystify references.
- **3**: The objective of this exercise is to understand that pointers and references present some small differences that make them less or more appropriate depending on the use and the lifecycle of the object used.
- **4**: Thanks to this exercise, the student should have gotten familiar with `ifstream` and `ofstream`.
- **5**: The goal of this exercise is to use pointers to class member functions. Also, this is the opportunity to discover the different log levels.
- **6**: Now that you are experienced coders, you should use new instruction types, statements, loops, etc. The goal of this last exercise is to make you discover the switch statement.

# AI Chats

# Concepts (no code) by exercise 

# C++ Module 01: Memory, References, and Advanced Features

## Core Concepts Overview

This module explores fundamental C++ concepts that differentiate it from C, focusing on memory management, references, and class member pointers. Here's a comprehensive breakdown of the key concepts for each exercise:

## Exercise 00: Memory Allocation in C++

**Key Concepts:**

- **Stack vs. Heap Allocation**:
Stack allocation is faster, automatically managed, and tied to scope, but limited in size. Objects declared within a function without `new` are allocated on the stack and automatically destroyed when they go out of scope. Heap allocation (using `new`) is manually managed, slower, but not limited by scope and allows for larger memory allocation.
- **Dynamic Memory with `new` and `delete`**:
Unlike C's `malloc()` and `free()`, C++'s `new` operator not only allocates memory but also calls the object's constructor. Similarly, `delete` calls the destructor before freeing memory, ensuring proper resource management.
- **Object Lifetime Management**:
In C++, an object's lifetime is determined by how it's allocated. Stack-allocated objects have automatic lifetime management, while heap-allocated objects exist until explicitly deleted, requiring careful tracking to avoid memory leaks.
- **Constructor and Destructor Usage**:
Constructors initialize new objects with specific attributes, while destructors perform cleanup when objects are destroyed. Proper implementation ensures resources are both initialized and released correctly.

## Exercise 01: Bulk Memory Allocation

**Key Concepts:**

- **Array Allocation with `new[]`**:
This operator allocates memory for multiple objects at once, creating a contiguous block of memory. Unlike individual allocations, this is more efficient for creating multiple objects of the same type.
- **Array Deletion with `delete[]`**:
When using `new[]` for allocation, you must use `delete[]` (not just `delete`) to properly free the memory. This ensures that the destructor is called for each object in the array.
- **Object Initialization in Arrays**:
When allocating arrays with `new[]`, the default constructor is called for each object. For customized initialization, you need to initialize each element individually after allocation.
- **Memory Management Discipline**:
Proper management requires tracking allocations and ensuring each `new[]` is matched with a `delete[]`, preventing memory leaks even with multiple objects.

## Exercise 02: References in C++

**Key Concepts:**

- **References as Aliases**:
Unlike pointers which store addresses, references act as aliases or alternative names for existing variables. They provide a way to refer to a variable by a different name.
- **Reference vs. Pointer Syntax**:
References use `&` in declaration (`int& ref = var;`) but not when accessing the variable (`ref = 10;`), while pointers use `*` for dereferencing (`*ptr = 10;`).
- **Reference Requirements and Limitations**:
References must be initialized when declared and cannot be reassigned to refer to a different variable, whereas pointers can be reassigned or null. This makes references safer but less flexible.
- **Memory Address Mechanics**:
Though references and pointers work differently syntactically, both ultimately operate on memory addresses. Understanding this connection helps demystify references.

## Exercise 03: References vs. Pointers in Practice

**Key Concepts:**

- **Design Decisions for Object Relationships**:
References are better for relationships where an object will always have a connection to another object that will never change (like HumanA always having a weapon). Pointers are better when the relationship is optional or might change (like HumanB potentially having no weapon or changing weapons).
- **Class Composition Models**:
Different relationship models between classes (has-a, uses-a) can be implemented using either references or pointers, depending on the permanence and nature of the relationship.
- **Lifetime Dependencies**:
Using references creates stronger lifetime dependencies between objects, whereas pointers allow more independence, with each approach having implications for object creation and destruction order.
- **Parameter Passing Strategies**:
References provide a cleaner syntax for when you want to modify the original object, while pointers make it clearer when ownership might be transferred or relationship might change.

## Exercise 04: File I/O in C++

**Key Concepts:**

- **Stream-Based I/O in C++**:
C++ uses stream objects (`ifstream` for input, `ofstream` for output) that provide type-safe, object-oriented file handling, contrasting with C's function-based approach.
- **File Open and Close Operations**:
Streams are opened by constructors (`std::ifstream file("filename.txt");`) and should be explicitly closed when finished (`file.close();`). In C++98, string filenames require `.c_str()`.
- **String Finding and Manipulation**:
Finding substrings without using `replace()` requires manual manipulation using methods like `find()`, `substr()`, and string concatenation to build modified content.
- **Error Handling for File Operations**:
Always check if file operations succeed (`if (!file.is_open())`) and handle errors gracefully to make robust file-processing applications.

## Exercise 05: Pointers to Member Functions

**Key Concepts:**

- **Member Function Pointer Declaration**:
The syntax differs from regular function pointers: `void (ClassName::*memberFuncPtr)(parameters)` declares a pointer to a member function of `ClassName` that returns `void` and takes specified parameters.
- **Storing and Initializing Function Pointers**:
Member function pointers are initialized with the address-of operator and class scope: `&ClassName::functionName`. They can be stored in arrays or other data structures for lookup tables.
- **Calling Through Member Function Pointers**:
Requires an object instance and special syntax: `(object.*memberFuncPtr)(arguments)` or `(this->*memberFuncPtr)(arguments)`. Parentheses are necessary due to operator precedence.
- **Function Dispatch Mechanisms**:
Creating a mapping between identifiers (like log levels) and functions allows for flexible, data-driven code execution without lengthy conditional chains.

## Exercise 06: Switch Statements for Control Flow

**Key Concepts:**

- **Switch Statement Syntax and Constraints**:
The expression in a switch must be an integral type in C++98 (int, char, enum). Each case must be a compile-time constant. The default case handles any value not explicitly matched.
- **Fall-Through Behavior**:
Without a `break` statement, execution continues into the next case. This is usually avoided, but can be intentionally used for cases that share code or for implementing filters (as in this exercise).
- **Efficient Comparison for Multiple Values**:
Switch statements are often optimized by compilers into jump tables or binary searches, potentially making them more efficient than if-else chains for multiple comparisons against the same variable.
- **Switch vs. Function Pointer Dispatch**:
While both provide alternatives to if-else chains, they serve different purposes. Switch is better for fixed sets of conditions, while function pointers provide more flexibility for runtime decision-making.

---

Understanding these concepts thoroughly will build a solid foundation in C++ programming, particularly in areas where it differs significantly from C. Each exercise incrementally introduces new concepts while reinforcing previous knowledge, developing your C++ skills progressively.​​​​​​​​​​​​​​​​

# Underlying C++ notions

# Without giving any solutions (i.e. code) to the exercises, tell me in detail what are the underlying C++ notions I should about to make the enclosed exercises.

Based on the C++ Module 01 document you've shared, I can provide you with an overview of the key C++ concepts you should understand to complete these exercises. This module focuses on important memory and reference concepts that differentiate C++ from C.

## Key C++ Concepts for Module 01

### 1. Memory Allocation in C++

- **Dynamic memory allocation**: Understanding the `new` and `delete` operators (vs. `malloc` and `free` in C)
- **Stack vs. heap allocation**: When to use each and their implications for object lifetime
- **Memory leaks**: How to prevent them in C++ through proper resource management

### 2. Pointers to Members

- **Function pointers**: Particularly pointers to member functions
- **How to declare and use pointers to class members** (both data and functions)
- **Syntax differences** between regular function pointers in C and member function pointers in C++

### 3. References

- **References vs. pointers**: How references differ from pointers conceptually
- **Reference semantics**: Understanding pass-by-reference vs. pass-by-value
- **When to use references** instead of pointers and vice versa
- **Reference initialization requirements**: Unlike pointers, references must be initialized

### 4. Switch Statements

- **C++ switch statement syntax** (similar to C but with some differences)
- **Fall-through behavior** and how to use it intentionally
- **Switch with strings** (in later C++ standards) but for C++98 understanding limitations

### 5. Classes and OOP Basics

- **Class definition**: Public vs. private access modifiers
- **Member functions**: Declaration and implementation
- **Constructors and destructors**: When they're called and how to implement them
- **Object initialization**: Different ways to initialize objects

### 6. String Handling in C++

- **std::string**: How it differs from C-style strings
- **String manipulation**: Common operations without using C functions
- **Stream operations** for input/output with strings

### 7. C++ Specific Features

- **Header organization**: .h/.hpp files and implementation in .cpp files
- **Include guards**: Preventing multiple inclusion problems
- **Namespaces**: Purpose and usage (though `using namespace` is forbidden in the exercises)
- **Orthodox Canonical Form**: Class design pattern mentioned for future modules

### 8. File I/O in C++

- **std::ifstream and std::ofstream**: For file input/output operations
- **Stream manipulators**: For formatting output

### 9. C++ Compilation

- **Compiling with c++**: Using proper flags (-Wall -Wextra -Werror)
- **Understanding C++98 standard** limitations compared to modern C++

The exercises progress from basic memory allocation concepts with zombies to more complex class interactions and member function pointers, so understanding these fundamentals will be crucial for success.​​​​​​​​​​​​​​​​

# 1) Memory Allocation in C++: An In-Depth Look

## New and Delete Operators

In C++, memory allocation is handled differently than in C. While C uses `malloc()` and `free()`, C++ introduces the `new` and `delete` operators:

```cpp
// C style
int* p_c = (int*)malloc(sizeof(int));
free(p_c);

// C++ style
int* p_cpp = new int;
delete p_cpp;

// Arrays
int* arr_c = (int*)malloc(10 * sizeof(int));
free(arr_c);

// C++ arrays
int* arr_cpp = new int[10];
delete[] arr_cpp;  // Note the [] for arrays
```

The `new` operator does more than just allocate memory - it also calls the constructor for objects. Similarly, `delete` calls the destructor before freeing memory. This is crucial for proper resource management in C++.

## Stack vs. Heap Allocation

### Stack Allocation

```cpp
// Stack allocation (automatic storage)
Zombie z("Stack Zombie");  // Object created on stack
// z automatically destroyed when it goes out of scope
```

Stack allocation is:

- Fast (simple pointer increment)
- Automatically managed (no memory leaks)
- Limited in size (depends on program's stack size)
- Tied to scope (objects destroyed when scope ends)

### Heap Allocation

```cpp
// Heap allocation (dynamic storage)
Zombie* z = new Zombie("Heap Zombie");
// Must be explicitly deleted to avoid memory leaks
delete z;
```

Heap allocation is:

- Slower than stack allocation
- Manually managed (potential for memory leaks)
- Limited only by available memory
- Independent of scope (exists until explicitly deleted)

## When to Use Each

For the zombie exercises, you'll need to determine which approach is better in different scenarios:

1. **Use stack allocation when**:
    - The object has a short, well-defined lifetime
    - The object is small
    - You need automatic cleanup
    - The object shouldn't outlive the current scope
1. **Use heap allocation when**:
    - The object needs to exist beyond the current scope
    - The object is large
    - You need to control the exact timing of construction/destruction
    - You're returning objects from functions (as in `newZombie()`)
    - You're creating multiple objects at once (as in `zombieHorde()`)

## Memory Management Considerations

### Memory Leaks

A memory leak occurs when you allocate memory but never free it. In C++98, there are no smart pointers (which were introduced in C++11), so you must manually manage memory:

```cpp
void potentialLeak() {
    Zombie* z = new Zombie("Leaky");
    // If we forget to delete z, we have a memory leak
    // delete z; // Correct way
}
```

For the zombie horde exercise, you'll need to be careful with array deletion:

```cpp
Zombie* horde = new Zombie[10];
// Must use delete[] for arrays, not delete
delete[] horde;
```

### Constructors and Destructors

For your Zombie class, you'll need to implement:

1. A constructor that sets the zombie's name
2. A destructor that prints a message (for debugging)

```cpp
// Example constructor
Zombie::Zombie(std::string name) : name(name) {
    // Initialization
}

// Example destructor 
Zombie::~Zombie() {
    std::cout << name << " is destroyed" << std::endl;
}
```

The destructor is particularly important for tracking when zombies are destroyed, which will help you see the difference between stack and heap allocation lifetimes.

## RAII (Resource Acquisition Is Initialization)

Though not explicitly mentioned in the module, RAII is an important C++ concept related to memory management. It ensures resources are properly cleaned up by tying them to object lifetimes. This concept will become more important as you progress in C++.

Understanding these memory allocation concepts thoroughly will help you complete the zombie exercises effectively while appreciating the key differences between C and C++ memory management approaches.​​​​​​​​​​​​​​​​

# 2) Pointers to Members in C++: An In-Depth Look

## Function Pointers in C vs. C++

In C, function pointers are relatively straightforward:

```cpp
// C style function pointer
void (*funcPtr)(int);
```

In C++, you can point to both standalone functions and member functions of classes. The syntax for member function pointers is more complex:

```cpp
// C++ member function pointer
void (ClassName::*memberFuncPtr)(int);
```

## Pointers to Member Functions

This concept is crucial for Exercise 05 (Harl 2.0) where you'll need to use member function pointers to implement the `complain` function without using a series of if/else statements.

### Declaration and Usage

```cpp
// Declaration
class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
    // Array of member function pointers
    typedef void (Harl::*FunctionPtr)(void);
    FunctionPtr functions[4];
    
public:
    Harl(); // Constructor to initialize the function pointers
    void complain(std::string level);
};
```

### Initialization

```cpp
// In constructor
Harl::Harl() {
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}
```

### Calling Member Functions Through Pointers

The syntax for calling a function through a member function pointer requires an object instance:

```cpp
// Calling a member function through a pointer
(this->*functions[index])();
```

The parentheses around `this->*functions[index]` are necessary due to operator precedence.

## Pointers to Data Members

Although not explicitly required in the exercises, understanding pointers to data members is also useful:

```cpp
class Example {
public:
    int value;
};

// Pointer to data member
int Example::*pValue = &Example::value;

Example obj;
obj.*pValue = 42; // Access and modify the value through the pointer
```

## Using Member Function Pointers for Dispatch Tables

The Harl exercise is a classic example of using member function pointers to create a dispatch table. This approach has several advantages:

1. **Efficiency**: Direct function call without multiple conditionals
2. **Maintainability**: Easy to add or modify behavior
3. **Cleaner code**: Avoids lengthy if/else cascades

For example, to implement the `complain` function:

```cpp
void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*functions[i])(); // Call the appropriate function
            return;
        }
    }
}
```

## Pointers to Members vs. Virtual Functions

Pointers to member functions represent an alternative to polymorphism through virtual functions. While virtual functions use dynamic dispatch through the vtable, member function pointers provide similar functionality but with more explicit control.

For instance, the Harl class could have been designed with inheritance and virtual functions, but the member function pointer approach is more lightweight and appropriate in this case.

## Usage in the Switch Exercise (Harl Filter)

In Exercise 06, you'll combine member function pointers with switch statements. The switch statement in C++ works similarly to C, but you'll use it to implement a filtering mechanism:

```cpp
void Harl::filter(std::string level) {
    int levelIndex = -1;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // Find the level index
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            levelIndex = i;
            break;
        }
    }
    
    // Switch statement with fall-through behavior
    switch (levelIndex) {
        case 0: // DEBUG
            (this->*functions[0])();
            // Fall through
        case 1: // INFO
            (this->*functions[1])();
            // Fall through
        case 2: // WARNING
            (this->*functions[2])();
            // Fall through
        case 3: // ERROR
            (this->*functions[3])();
            break;
        default:
            // Handle invalid level
            break;
    }
}
```

Understanding this concept thoroughly will help you implement both the Harl class and the Harl filter effectively, demonstrating how C++ provides powerful alternatives to traditional conditional logic.​​​​​​​​​​​​​​​​

# 3) References in C++: An In-Depth Look

## What Are References in C++?

References are one of C++'s most distinctive features compared to C. A reference is essentially an alias for an existing variable. Unlike pointers, which store memory addresses that can be manipulated, references are fixed at initialization and cannot be reassigned to refer to different objects.

## References vs. Pointers

### Key Differences:

1. **Initialization Requirements**:
    - References must be initialized when declared
    - Pointers can be declared without initialization

```cpp
int x = 5;
int& ref = x;        // Reference must be initialized
int* ptr;            // Pointer can be declared without initialization
ptr = &x;            // Pointer can be assigned later
```

1. **Reassignment**:
    - References cannot be reassigned to refer to different variables
    - Pointers can be reassigned to point to different memory locations

```cpp
int y = 10;
ref = y;             // This does NOT make ref refer to y; it assigns y's value to x
ptr = &y;            // This DOES make ptr point to y instead of x
```

1. **Null Values**:
    - References cannot be null
    - Pointers can be null

```cpp
int* nullPtr = nullptr;  // Valid in C++
// int& nullRef;        // Invalid: references must be initialized
```

1. **Dereferencing Syntax**:
    - References use the same syntax as the original variable
    - Pointers require explicit dereferencing with `*`

```cpp
std::cout << ref;    // Same as std::cout << x;
std::cout << *ptr;   // Need to dereference pointer
```

1. **Address Manipulation**:
    - References don't allow address arithmetic
    - Pointers can be incremented/decremented

## References in Practice (Exercise 02)

The "HI THIS IS BRAIN" exercise specifically explores references:

```cpp
std::string string = "HI THIS IS BRAIN";
std::string* stringPTR = &string;
std::string& stringREF = string;

// Memory addresses
std::cout << &string << std::endl;    // Address of the string
std::cout << stringPTR << std::endl;  // Same as above
std::cout << &stringREF << std::endl; // Also same as above

// Values
std::cout << string << std::endl;     // The string itself
std::cout << *stringPTR << std::endl; // Dereferenced pointer - same as above
std::cout << stringREF << std::endl;  // The reference - same as above
```

This exercise demonstrates that a reference is essentially another name for the same memory location.

## When to Use References vs. Pointers

### Use References When:

1. **Function parameters that need to modify the original**:

```cpp
void modifyValue(int& value) {
    value = 42;  // Modifies the original variable
}
```

1. **Avoiding null checks**:

```cpp
void processString(const std::string& str) {
    // No need to check if str is null
    std::cout << str.length() << std::endl;
}
```

1. **Return values that should be aliases**:

```cpp
int& getElement(std::vector<int>& vec, int index) {
    return vec[index];  // Returns a reference to the element
}
```

### Use Pointers When:

1. **The object might not exist (can be null)**:

```cpp
void processOptionalData(Data* data) {
    if (data) {
        // Process data
    }
}
```

1. **Reassignment is needed**:

```cpp
void changePointer(int** ptr, int* newValue) {
    *ptr = newValue;  // Change what ptr points to
}
```

1. **Using dynamic memory allocation**:

```cpp
int* createArray(int size) {
    return new int[size];  // Must be deleted later
}
```

## References in Exercise 03 (Unnecessary Violence)

This exercise illustrates a practical use case for both references and pointers:

```cpp
class HumanA {
private:
    std::string name;
    Weapon& weapon;     // Reference - HumanA always has a weapon

public:
    HumanA(std::string name, Weapon& weapon);
    void attack();
};

class HumanB {
private:
    std::string name;
    Weapon* weapon;     // Pointer - HumanB might not have a weapon

public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack();
};
```

Here, HumanA uses a reference because it will always have a weapon, while HumanB uses a pointer because it might not always have a weapon. This demonstrates when to use each approach based on the requirements.

## References and Const

References are often combined with `const` to prevent modification:

```cpp
void printData(const std::string& data) {
    // Cannot modify data
    std::cout << data << std::endl;
}
```

This is efficient as it avoids copying while ensuring the function cannot modify the original data.

## Reference Return Types

The `getType()` function in the Weapon class likely returns a constant reference:

```cpp
const std::string& getType() const {
    return this->type;  // Returns a reference, not a copy
}
```

This is more efficient than returning by value when dealing with larger objects like strings.

Understanding references thoroughly is essential for effective C++ programming as they offer a cleaner syntax and fewer potential errors compared to pointers in many situations, particularly when you know an object will always exist.​​​​​​​​​​​​​​​​

# 4) Switch Statements in C++: An In-Depth Look

## Basic Switch Statement Syntax

The switch statement in C++ is similar to the one in C, providing a cleaner alternative to multiple if-else statements when comparing a variable against multiple constant values:

```cpp
switch (expression) {
    case constant1:
        // code to execute if expression == constant1
        break;
    case constant2:
        // code to execute if expression == constant2
        break;
    default:
        // code to execute if no case matches
        break;
}
```

The `expression` is evaluated once and compared with the values of each `case`. When a match is found, the corresponding statements are executed.

## Important Characteristics of Switch Statements

### 1. Expression and Case Types

In C++98, the expression in a switch statement must evaluate to an integral type (int, char, enum, etc.). You cannot use strings or floating-point numbers directly:

```cpp
int choice = 2;
switch (choice) { /* Valid */ }

char letter = 'A';
switch (letter) { /* Valid */ }

enum Level { DEBUG, INFO, WARNING, ERROR };
Level level = WARNING;
switch (level) { /* Valid */ }

// Not valid in C++98:
// std::string str = "DEBUG";
// switch (str) { /* Invalid */ }
```

### 2. Fall-Through Behavior

A crucial feature of switch statements is the fall-through behavior. If you omit the `break` statement, execution will continue into the next case:

```cpp
switch (level) {
    case DEBUG:
        std::cout << "Debug message" << std::endl;
        // No break - falls through to INFO
    case INFO:
        std::cout << "Info message" << std::endl;
        // No break - falls through to WARNING
    case WARNING:
        std::cout << "Warning message" << std::endl;
        // No break - falls through to ERROR
    case ERROR:
        std::cout << "Error message" << std::endl;
        break;
    default:
        std::cout << "Unknown level" << std::endl;
        break;
}
```

This fall-through behavior is specifically useful for Exercise 06 (Harl filter), where you need to display messages for a given level and all levels above it.

### 3. Scope and Variable Declarations

Variables declared in a case block are visible to all subsequent case blocks:

```cpp
switch (level) {
    case DEBUG:
        int x = 10;     // Visible to all cases below
        std::cout << x << std::endl;
        break;
    case INFO:
        x = 20;         // Can use x declared in DEBUG
        std::cout << x << std::endl;
        break;
    // ...
}
```

To limit variable scope, you can use curly braces:

```cpp
switch (level) {
    case DEBUG: {
        int x = 10;     // Limited to this block
        std::cout << x << std::endl;
        break;
    }
    case INFO: {
        int x = 20;     // Different variable than in DEBUG
        std::cout << x << std::endl;
        break;
    }
    // ...
}
```

## Implementing the Harl Filter with Switch

Exercise 06 specifically asks for a switch statement to implement the filter functionality. Here's how you might approach it:

```cpp
void Harl::filter(std::string level) {
    // Convert string level to an integer index
    int levelIndex = -1;
    
    if (level == "DEBUG") levelIndex = 0;
    else if (level == "INFO") levelIndex = 1;
    else if (level == "WARNING") levelIndex = 2;
    else if (level == "ERROR") levelIndex = 3;
    
    // Use switch with fall-through to display appropriate messages
    switch (levelIndex) {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            debug();
            // Fall-through intentional
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            info();
            // Fall-through intentional
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            warning();
            // Fall-through intentional
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
```

## Switch vs. If-Else Performance

Switches can be more efficient than if-else chains for multiple comparisons against the same variable:

1. **Compilation**: Compilers often optimize switch statements into jump tables or binary searches, making them potentially faster than a series of if-else statements.
2. **Readability**: Switch statements can be more readable for multiple comparisons against the same variable.
3. **Predictability**: Switch statements with many cases can be more predictable for branch prediction in modern processors.

## Switch Limitations in C++98

It's important to note the limitations of switch statements in C++98 compared to newer standards:

1. **No String Switches**: Cannot directly switch on strings (must convert to integers or enums)
2. **No Range Cases**: Cannot specify ranges (like `case 1..5:`)
3. **No Non-Constant Cases**: All case values must be compile-time constants

## Combining Switch with Member Function Pointers

For Exercise 06, you'll likely combine the switch statement with member function pointers:

```cpp
void Harl::filter(std::string level) {
    // Create a mapping of levels to indices
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelIndex = -1;
    
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            levelIndex = i;
            break;
        }
    }
    
    // Member function pointers array
    void (Harl::*functions[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    // Use switch with fall-through
    switch (levelIndex) {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*functions[0])();
            // Fall through
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*functions[1])();
            // Fall through
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*functions[2])();
            // Fall through
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*functions[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
```

This approach combines the efficient dispatch of member function pointers with the elegant fall-through behavior of switch statements to implement the Harl filter functionality as requested in the module.​​​​​​​​​​​​​​​​

# 5) Classes and OOP Basics in C++: An In-Depth Look

## Introduction to Classes in C++

Classes are fundamental building blocks in C++ that enable Object-Oriented Programming (OOP). Unlike C, which is procedural, C++ allows you to bundle data and functions that operate on that data into a single unit.

## Class Definition and Structure

A basic class definition looks like this:

```cpp
class Zombie {
private:
    std::string name;  // Private attribute

public:
    // Constructor
    Zombie(std::string name);
    
    // Destructor
    ~Zombie();
    
    // Member function
    void announce(void);
};
```

### Access Modifiers

- **private**: Members are accessible only within the class
- **public**: Members are accessible from outside the class
- **protected**: (Not used in these exercises) Members are accessible within the class and its derived classes

In C, structs can only contain data. In C++, structs are essentially classes with default public access, while classes have default private access.

## Constructor and Destructor

These are special member functions that manage object lifecycle:

### Constructor

```cpp
// Implementation in Zombie.cpp
Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << "Zombie " << name << " is created" << std::endl;
}
```

Constructors:

- Have the same name as the class
- Do not have a return type
- Are called automatically when an object is created
- Can be overloaded (multiple constructors with different parameters)

### Destructor

```cpp
// Implementation in Zombie.cpp
Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed" << std::endl;
}
```

Destructors:

- Named with a tilde (~) before the class name
- Cannot take parameters
- Cannot be overloaded
- Are called automatically when an object is destroyed
- Essential for releasing resources (especially with dynamic allocation)

## Member Functions

These functions operate on the data within the class:

```cpp
// Declaration in Zombie.h
void announce(void);

// Implementation in Zombie.cpp
void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
```

Note the scope resolution operator `::` which identifies the class to which the function belongs.

## The `this` Pointer

Every non-static member function receives a hidden `this` pointer, which points to the object on which the function was called:

```cpp
void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
```

Using `this->` is optional when there's no ambiguity, but it helps clarify that you're accessing a member variable.

## Object Creation and Destruction

### Stack Allocation

```cpp
{
    Zombie stackZombie("Stack Zombie");
    // Object is automatically destroyed when it goes out of scope
}
```

### Heap Allocation

```cpp
Zombie* heapZombie = new Zombie("Heap Zombie");
// Must be explicitly deleted to avoid memory leaks
delete heapZombie;
```

## Orthodox Canonical Form

For future modules, you'll need to understand this standard class design pattern, which includes:

1. Default constructor
2. Copy constructor
3. Copy assignment operator
4. Destructor

```cpp
class CanonicalClass {
public:
    // Default constructor
    CanonicalClass();
    
    // Copy constructor
    CanonicalClass(const CanonicalClass& other);
    
    // Copy assignment operator
    CanonicalClass& operator=(const CanonicalClass& other);
    
    // Destructor
    ~CanonicalClass();
};
```

## Separation of Declaration and Implementation

In C++, it's common to separate the class declaration (in a header file) from its implementation (in a source file):

### Header File (Zombie.hpp)

```cpp
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

// Function prototypes
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
```

### Implementation File (Zombie.cpp)

```cpp
#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
```

## Object Relationships

In the "Unnecessary violence" exercise, you'll work with classes that have relationships with other classes:

```cpp
class HumanA {
private:
    std::string name;
    Weapon& weapon;  // HumanA has a reference to a Weapon

public:
    HumanA(std::string name, Weapon& weapon);
    void attack(void);
};
```

This demonstrates composition, where one class contains instances of another class.

## Getters and Setters

These methods provide controlled access to private attributes:

```cpp
// Getter returns a constant reference
const std::string& Weapon::getType(void) const {
    return this->type;
}

// Setter modifies the private attribute
void Weapon::setType(std::string newType) {
    this->type = newType;
}
```

The `const` qualifier in the getter method promises that the method won't modify the object.

## Key OOP Concepts Illustrated in the Exercises

1. **Encapsulation**: Bundling data and methods together, with controlled access
2. **Abstraction**: Hiding implementation details, exposing only necessary interfaces
3. **Relationships between objects**: Composition (has-a relationship)

Understanding these foundational OOP concepts in C++ will help you implement the exercises effectively while appreciating the difference between C's procedural approach and C++'s object-oriented capabilities.​​​​​​​​​​​​​​​​

# 6) String Handling in C++: An In-Depth Look

## C-style Strings vs. std::string

C++ offers significant improvements over C for string handling through the `std::string` class, which is part of the Standard Template Library (STL).

### C-style Strings

```cpp
// C-style string
char cString[] = "Hello world";
```

C-style strings are:

- Character arrays terminated by a null character (`\0`)
- Fixed in size once allocated
- Prone to buffer overflows and memory issues
- Manipulated using functions like `strcpy()`, `strcat()`, `strlen()`

### C++ std::string

```cpp
// C++ string
std::string cppString = "Hello world";
```

Benefits of std::string:

- Dynamic size management (grows as needed)
- Memory safety (handles allocation/deallocation)
- Rich set of methods for manipulation
- Operator overloading for intuitive usage

## Common std::string Operations

### String Creation and Assignment

```cpp
// Various ways to create strings
std::string s1;                     // Empty string
std::string s2 = "Hello";          // Initialization with string literal
std::string s3(s2);                // Copy constructor
std::string s4(5, 'a');            // String with 5 repeated 'a' characters: "aaaaa"
```

### String Concatenation

```cpp
std::string first = "Hello";
std::string last = "World";

// Using + operator
std::string greeting = first + " " + last;  // "Hello World"

// Using append method
first.append(" ");
first.append(last);                 // first is now "Hello World"
```

### Accessing Characters

```cpp
std::string str = "Example";

// Using [] operator (no bounds checking)
char first = str[0];               // 'E'

// Using at() method (with bounds checking)
char last = str.at(str.length() - 1); // 'e'
```

### String Length and Capacity

```cpp
std::string str = "Example";

// Length/size
size_t length = str.length();      // 7
size_t size = str.size();          // 7 (same as length())

// Capacity
size_t capacity = str.capacity();  // Implementation-defined, >= 7
```

### Finding Substrings

```cpp
std::string str = "Hello World";
size_t pos;

// Find first occurrence
pos = str.find("World");           // 6
pos = str.find('o');               // 4

// Find if not found
pos = str.find("Goodbye");         // std::string::npos
if (pos == std::string::npos) {
    // Not found
}
```

### Extracting Substrings

```cpp
std::string str = "Hello World";
std::string sub;

// Extract substring
sub = str.substr(0, 5);            // "Hello"
sub = str.substr(6);               // "World" (to the end)
```

### Modifying Strings

```cpp
std::string str = "Hello World";

// Insert
str.insert(5, " Beautiful");       // "Hello Beautiful World"

// Erase
str.erase(6, 10);                  // "Hello World"

// Replace (forbidden in ex04 but good to know)
// str.replace(0, 5, "Hi");        // "Hi World"
```

## Exercise 04 Approach (Without Using replace())

For the "Sed is for losers" exercise, you need to replace all occurrences of a substring without using the `replace()` method. Here's an approach:

```cpp
std::string replaceAll(std::string content, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t lastPos = 0;
    size_t findPos;
    
    // Find all occurrences and build new string
    while ((findPos = content.find(s1, lastPos)) != std::string::npos) {
        // Add content up to the match
        result.append(content, lastPos, findPos - lastPos);
        // Add replacement
        result.append(s2);
        // Continue after this match
        lastPos = findPos + s1.length();
    }
    
    // Add any remaining content
    result.append(content, lastPos, content.length() - lastPos);
    
    return result;
}
```

## String Streams

Although not explicitly required in the exercises, understanding string streams is valuable for C++ string manipulation:

```cpp
#include <sstream>

std::string number = "42";
int value;

// String to integer
std::istringstream iss(number);
iss >> value;  // value is now 42

// Integer to string
std::ostringstream oss;
oss << value * 2;
std::string result = oss.str();  // result is "84"
```

## File I/O with Strings (Exercise 04)

For the "Sed is for losers" exercise, you'll need to work with file I/O and strings:

```cpp
#include <fstream>
#include <string>

std::string readFileToString(const std::string& filename) {
    std::ifstream file(filename.c_str());  // C++98 requires c_str()
    if (!file.is_open()) {
        // Handle error
        return "";
    }
    
    std::string content;
    std::string line;
    while (std::getline(file, line)) {
        content += line;
        if (!file.eof()) {
            content += '\n';  // Add newline except after last line
        }
    }
    
    file.close();
    return content;
}

bool writeStringToFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename.c_str());  // C++98 requires c_str()
    if (!file.is_open()) {
        // Handle error
        return false;
    }
    
    file << content;
    file.close();
    return true;
}
```

## C++98 String Handling Limitations

It's important to be aware of C++98 limitations compared to modern C++:

1. No string literals (C++11 feature: `std::string s = R"(Raw string with "quotes")"`)
2. No string view (C++17 feature for non-owning string references)
3. No move semantics for efficient string transfers (C++11 feature)
4. Limited Unicode support

## Error and Exception Handling with Strings

For robust string manipulation, consider error handling:

```cpp
try {
    std::string str = "Hello";
    char c = str.at(10);  // Will throw std::out_of_range
} catch (const std::out_of_range& e) {
    std::cerr << "Error: " << e.what() << std::endl;
}
```

Understanding these string handling concepts will be crucial for implementing the exercises effectively, especially Exercise 04 where you need to manipulate file content without using the `replace()` method.​​​​​​​​​​​​​​​​

# 7) C++ Specific Features: An In-Depth Look

## Header Organization in C++

Unlike C, C++ projects typically follow a more structured organization with clear separation between interface declarations and implementations.

### Header Files (.h or .hpp)

Header files typically contain:

- Class declarations
- Function prototypes
- Template definitions
- Inline functions
- Constants and enumerations

```cpp
// Zombie.hpp
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

// Function prototypes for related functions
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
```

### Implementation Files (.cpp)

Implementation files contain:

- Function definitions
- Method implementations
- Global variable definitions

```cpp
// Zombie.cpp
#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
```

## Include Guards

Include guards prevent multiple inclusion of the same header file. They're essential for avoiding compilation errors:

```cpp
#ifndef ZOMBIE_HPP   // If ZOMBIE_HPP is not defined
# define ZOMBIE_HPP  // Define it

// Header content goes here

#endif              // End of guard
```

Some compilers also support the non-standard `#pragma once` directive, but for C++98 compatibility, use the traditional include guards shown above.

## Namespaces

Namespaces help avoid naming conflicts by grouping related declarations:

```cpp
namespace MyProject {
    class Zombie {
        // ...
    };
    
    void doSomething();
}

// Usage
MyProject::Zombie z("Test");
MyProject::doSomething();
```

The exercises specify that `using namespace <ns_name>` is forbidden, so you must use the scope resolution operator (`::`) to access elements in namespaces:

```cpp
// Instead of:
using namespace std;
string name;

// Do this:
std::string name;
```

## Inline Functions

C++ allows inline functions, which suggest to the compiler that it should insert the function's code directly at the call site:

```cpp
inline int square(int x) {
    return x * x;
}
```

Small, frequently called functions are good candidates for inlining. However, the module rules state that function implementations should not be in header files (except for templates).

## Const Correctness

The `const` keyword indicates that something won't be modified:

```cpp
// Const parameter
void print(const std::string& s);

// Const method (can't modify object's state)
const std::string& getType() const;

// Const return value
const int MAX_ZOMBIES = 10;
```

Proper use of `const` helps prevent bugs and enables compiler optimizations.

## Function Overloading

Unlike C, C++ allows multiple functions with the same name but different parameter types:

```cpp
void printValue(int value);
void printValue(double value);
void printValue(const std::string& value);
```

The compiler selects the appropriate function based on the argument types.

## Default Parameters

Functions can have default values for parameters:

```cpp
void createZombie(std::string name = "Default");
```

If the caller doesn't provide a value, the default is used.

## References vs. Pointers

As discussed earlier, C++ introduces references as aliases to existing variables:

```cpp
void modifyByReference(int& value) {
    value++;  // Modifies the original variable
}

void modifyByPointer(int* value) {
    (*value)++;  // Also modifies the original, but with different syntax
}
```

## Stream I/O

C++ uses streams for input/output operations:

```cpp
#include <iostream>  // For console I/O
#include <fstream>   // For file I/O

// Console output
std::cout << "Hello, World!" << std::endl;

// File output
std::ofstream outFile("output.txt");
outFile << "Writing to a file" << std::endl;
outFile.close();

// File input
std::ifstream inFile("input.txt");
std::string line;
while (std::getline(inFile, line)) {
    std::cout << line << std::endl;
}
inFile.close();
```

This is more type-safe than C's `printf()` and `scanf()` functions.

## Memory Management

Unlike C, C++ provides operators for dynamic memory management:

```cpp
// Single object allocation
int* p = new int(42);
delete p;  // Must delete to avoid memory leaks

// Array allocation
int* arr = new int[10];
delete[] arr;  // Note the [] for arrays
```

The module specifically warns about memory leaks, so always ensure that each `new` is matched with a corresponding `delete` or `delete[]`.

## Orthodox Canonical Form

For future modules, you'll need to follow this class design pattern, which includes:

```cpp
class CanonicalClass {
public:
    // Default constructor
    CanonicalClass();
    
    // Copy constructor
    CanonicalClass(const CanonicalClass& other);
    
    // Copy assignment operator
    CanonicalClass& operator=(const CanonicalClass& other);
    
    // Destructor
    ~CanonicalClass();
};
```

This ensures proper resource management when objects are copied or assigned.

## Compilation Process

The module specifies compilation with:

```Bash
c++ -Wall -Wextra -Werror -std=c++98
```

- `-Wall`: Enable all warnings
- `-Wextra`: Enable extra warnings
- `-Werror`: Treat warnings as errors
- `-std=c++98`: Use C++98 standard

Understanding these specific C++ features will help you implement the exercises correctly while following the module's requirements.​​​​​​​​​​​​​​​​

# 8) File I/O in C++: An In-Depth Look

## C++ Stream-Based File I/O

Unlike C, which uses functions like `fopen()`, `fread()`, and `fwrite()` for file operations, C++ provides a stream-based approach through the `<fstream>` header. This approach is more type-safe and integrates seamlessly with other C++ features.

## Basic File Operations

### Opening and Closing Files

```cpp
#include <fstream>
#include <string>

// Opening a file for reading
std::ifstream inFile("input.txt");  // C++98 syntax
if (!inFile.is_open()) {
    // Handle error
    std::cerr << "Could not open file for reading" << std::endl;
    return 1;
}

// Opening a file for writing
std::ofstream outFile("output.txt");  // C++98 syntax
if (!outFile.is_open()) {
    // Handle error
    std::cerr << "Could not open file for writing" << std::endl;
    return 1;
}

// Don't forget to close files when done
inFile.close();
outFile.close();
```

Note that in C++98, you cannot pass a `std::string` directly to the constructor. Instead, use the `.c_str()` method:

```cpp
std::string filename = "data.txt";
std::ifstream inFile(filename.c_str());
```

### Reading from Files

There are several ways to read from files:

#### Line by Line

```cpp
std::string line;
while (std::getline(inFile, line)) {
    // Process line
    std::cout << line << std::endl;
}
```

#### Word by Word

```cpp
std::string word;
while (inFile >> word) {
    // Process word
    std::cout << word << " ";
}
```

#### Character by Character

```cpp
char c;
while (inFile.get(c)) {
    // Process character
    std::cout << c;
}
```

#### Reading the Entire File at Once

```cpp
// Get file size
inFile.seekg(0, std::ios::end);
std::streamsize size = inFile.tellg();
inFile.seekg(0, std::ios::beg);

// Read the entire file
std::string content(size, ' ');
inFile.read(&content[0], size);

// Now content contains the entire file
```

### Writing to Files

Writing to files is straightforward using the stream insertion operator:

```cpp
outFile << "Hello, World!" << std::endl;
outFile << 42 << " " << 3.14 << std::endl;

// Writing a variable
std::string message = "This is a test";
outFile << message << std::endl;
```

## File Modes

You can specify how to open a file using file modes:

```cpp
// Open for reading (default for ifstream)
std::ifstream readFile("input.txt", std::ios::in);

// Open for writing (default for ofstream)
std::ofstream writeFile("output.txt", std::ios::out);

// Open for appending
std::ofstream appendFile("log.txt", std::ios::app);

// Open in binary mode
std::ifstream binaryFile("data.bin", std::ios::binary);

// Combining modes
std::fstream file("data.txt", std::ios::in | std::ios::out | std::ios::app);
```

## Error Handling

File operations can fail for various reasons. Always check for errors:

```cpp
if (!inFile) {
    // File operation failed
    std::cerr << "Error: " << strerror(errno) << std::endl;
}

// Alternatively, check specific error states
if (inFile.fail()) {
    std::cerr << "A formatting error occurred" << std::endl;
}

if (inFile.bad()) {
    std::cerr << "A critical error occurred" << std::endl;
}

if (inFile.eof()) {
    std::cout << "End of file reached" << std::endl;
}
```

## Implementing Exercise 04 (Sed is for losers)

For this exercise, you need to read a file, replace occurrences of a string, and write the result to a new file:

```cpp
#include <fstream>
#include <string>
#include <iostream>

bool replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    // Open input file
    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open input file" << std::endl;
        return false;
    }
    
    // Open output file
    std::string outFilename = filename + ".replace";
    std::ofstream outFile(outFilename.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open output file" << std::endl;
        inFile.close();
        return false;
    }
    
    // Process file line by line
    std::string line;
    while (std::getline(inFile, line)) {
        std::string modifiedLine;
        size_t pos = 0;
        size_t prevPos = 0;
        
        // Find and replace all occurrences of s1 in the current line
        while ((pos = line.find(s1, prevPos)) != std::string::npos) {
            // Add the part before the match
            modifiedLine.append(line, prevPos, pos - prevPos);
            // Add the replacement
            modifiedLine.append(s2);
            // Move past this occurrence
            prevPos = pos + s1.length();
        }
        
        // Add any remaining text after the last match
        modifiedLine.append(line, prevPos, line.length() - prevPos);
        
        // Write the modified line to the output file
        outFile << modifiedLine;
        
        // Add newline if not at the end of file
        if (!inFile.eof()) {
            outFile << std::endl;
        }
    }
    
    inFile.close();
    outFile.close();
    return true;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if (s1.empty()) {
        std::cerr << "Error: string1 cannot be empty" << std::endl;
        return 1;
    }
    
    if (!replaceInFile(filename, s1, s2)) {
        return 1;
    }
    
    std::cout << "File processed successfully" << std::endl;
    return 0;
}
```

This implementation reads the file line by line, replaces all occurrences of `s1` with `s2` using string operations, and writes the result to a new file with the `.replace` extension. It also includes error handling for file operations and validates input parameters.

## Key Points to Remember

1. Always close files when you're done with them
2. Check if file operations succeed before proceeding
3. Use the appropriate file mode for your needs
4. In C++98, use `.c_str()` when passing string filenames
5. For maximum compatibility, handle file I/O errors explicitly

Understanding these file I/O concepts will be crucial for implementing Exercise 04 effectively, allowing you to create a program that safely and efficiently processes files without using the forbidden C file manipulation functions.​​​​​​​​​​​​​​​​

# 9) C++ Compilation Process: An In-Depth Look

## Compilation Steps in C++

Unlike interpreted languages, C++ is a compiled language that goes through several distinct steps to transform source code into an executable program:

1. **Preprocessing**
2. **Compilation**
3. **Assembly**
4. **Linking**

## Preprocessing

During preprocessing, the C++ preprocessor handles directives that begin with `#`:

```cpp
#include <iostream>   // Includes the content of the iostream header file
#define MAX_ZOMBIES 10  // Defines a macro
#ifdef DEBUG          // Conditional compilation
    // Debug code
#endif
```

Key preprocessing operations:

- File inclusion (`#include`)
- Macro expansion (`#define`)
- Conditional compilation (`#ifdef`, `#ifndef`, `#endif`, etc.)
- Line control (`#line`)
- Error generation (`#error`)

## Compilation

The compiler translates the preprocessed code into assembly language or directly into an object file. It performs:

- Syntax checking
- Type checking
- Optimization
- Code generation

For the module exercises, you'll use the `c++` compiler with specific flags:

```Bash
c++ -Wall -Wextra -Werror -std=c++98 -o program main.cpp Zombie.cpp other_files.cpp
```

### Key Compiler Flags

- **-Wall**: Enable all warnings
- **-Wextra**: Enable extra warnings beyond those covered by -Wall
- **-Werror**: Treat warnings as errors, causing compilation to fail if warnings are generated
- **-std=c++98**: Compile according to the C++98 standard (as required by the module)
- **-o program**: Specify the output executable name

## Assembly

The compiler typically generates assembly code, which is then translated into machine code. This step is usually transparent to the programmer.

## Linking

The linker combines multiple object files into a single executable, resolving references between them:

- Resolves function calls to their implementations
- Combines code from different source files
- Includes code from static libraries
- Sets up for dynamic linking

## Common Compilation Errors and Warnings

### Syntax Errors

```other
main.cpp:15:20: error: expected ';' after expression
    std::cout << "Hello"
                          ^
                          ;
```

### Type Errors

```other
main.cpp:12:17: error: cannot initialize a variable of type 'int' with an rvalue of type 'const char *'
    int x = "Hello";
                ^~~~~~
```

### Linker Errors

```other
undefined reference to 'Zombie::announce()'
```

This means you've declared but not defined the function, or you're not linking with the correct object file.

## Creating and Using Makefiles

The module requires using Makefiles for compilation. A basic Makefile for one of the zombie exercises might look like:

```other
NAME = zombie

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
```

This Makefile:

- Compiles each source file to an object file
- Links all object files to create the executable
- Provides targets for cleaning (`clean`, `fclean`) and rebuilding (`re`)

## Include Guards to Prevent Double Inclusion

To prevent multiple inclusion of headers, use include guards:

```cpp
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// Header content here

#endif
```

This ensures that the contents of the header are only included once in any translation unit, preventing redefinition errors.

## Separate Compilation and Header Dependencies

In C++, it's important to manage header dependencies correctly:

```cpp
// Zombie.hpp
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
    // Class declaration
};

#endif

// Zombie.cpp
#include "Zombie.hpp"

// Method implementations
```

Each `.cpp` file should include all the headers it needs directly, even if other included headers already include them. This is known as the "include what you use" principle.

## Debug vs. Release Builds

While not explicitly mentioned in the module, understanding different build configurations is valuable:

```Bash
# Debug build (includes debugging information)
c++ -g -Wall -Wextra -Werror -std=c++98 -o program_debug main.cpp

# Release build (with optimization)
c++ -O2 -Wall -Wextra -Werror -std=c++98 -o program_release main.cpp
```

Debug builds include information for debuggers, while release builds optimize for performance.

Understanding the compilation process will help you troubleshoot errors effectively and create proper Makefiles for your C++ exercises, ensuring your code compiles correctly and meets the module's requirements.​​​​​​​​​​​​​​​​



# Subject

[cpp01.en.subject.pdf](Cpp%20Module%2001%20(42).assets/cpp01.en.subject.pdf)

# Evaluation 

[CPP Module 01 correction](https://42-evaluation-sheets-hub.vercel.app/Cursus/CPP01/index.html)



---

### Preliminary tests

If cheating is suspected, the evaluation stops here. Use the "Cheat" flag to report it. Take this decision calmly, wisely, and please, use this button with caution.

#### Prerequisites

The code must compile with c++ and the flags -Wall -Wextra -Werror. Don't forget this project has to follow the C++98 standard. Thus, C++11 (and later) functions or containers are NOT expected.

Any of these means you must not grade the exercise in question:

- A function is implemented in a header file (except for template functions).
- A Makefile compiles without the required flags and/or another compiler than c++.

Any of these means that you must flag the project with "Forbidden Function":

- Use of a "C" function (*alloc, *printf, free).
- Use of a function not allowed in the exercise guidelines.
- Use of "using namespace <ns_name>" or the "friend" keyword.
- Use of an external library, or features from versions other than C++98.

Yes No

---

### Exercise 00: BraiiiiiiinnnzzzZ

The goal of this exercise is to understand how to allocate memory in C++.

#### Makefile and tests

- [ ] There is a Makefile that compiles using the appropriate flags.
- [ ] There is at least a main to test the exercise.

Yes No

#### Zombie Class

- [ ] There is a Zombie Class.
- [ ] It has a private name attribute.
- [ ] It has at least a constructor.
- [ ] It has a member function announce( void ) that prints: "<name>: BraiiiiiiinnnzzzZ..."
- [ ] The destructor prints a debug message that includes the name of the zombie.

Yes No

#### newZombie

- [ ] There is a newZombie() function prototyped as: [ Zombie* newZombie( std::string name ); ]
- [ ] It should allocate a Zombie on the heap and return it.
- [ ] Ideally, it should call the constructor that takes a string and initializes the name.
- [ ] The exercise should be marked as correct if the Zombie can announce itself with the name passed to the function.
- [ ] There are tests to prove everything works.
- [ ] The zombie is deleted correctly before the end of the program.

Yes No

#### randomChump

- [ ] There is a randomChump() function prototyped as: [ void randomChump( std::string name ); ]
- [ ] It should create a Zombie on the stack, and make it announce itself.
- [ ] Ideally the zombie should be allocated on the stack (so implicitly deleted at the end of the function). It can also be allocated on the heap and then explicitly deleted.
- [ ] The student must justify their choices.
- [ ] There are tests to prove everything works.

Yes No

---

### Exercise 01: Moar brainz!

The goal of this exercise is to allocate a number of objects at the same time using new[], initialize them, and to properly delete them.

#### Makefile and tests

- [ ] There is a Makefile that compiles using the appropriate flags.
- [ ] There is at least a main to test the exercise.

Yes No

#### zombieHorde

- [ ] The Zombie Class has a default constructor.
- [ ] There is a zombieHorde() function prototyped as: [ Zombie* zombieHorde( int N, std::string name ); ]
- [ ]  It allocates N zombies on the heap explicitly using new[]. 
- [ ] After the allocation, there is an initialization of the objects to set their name. 
- [ ] It returns a pointer to the first zombie. 
- [ ] There are enough tests in the main to prove the previous points. 
- [ ] Like: calling announce() on all the zombies. 
- [ ] Last, all the zombies should be deleted at the same time in the main.

Yes No

---

### Exercise 02: HI THIS IS BRAIN

The goal of this exercise is to Demystify references.

#### Makefile and tests

- [ ] There is a Makefile that compiles using the appropriate flags. There is at least a main to test the exercise.

Yes No

#### HI THIS IS BRAIN

- [ ] There is a string containing "HI THIS IS BRAIN". 
- [ ] stringPTR is a pointer to the string. 
- [ ] stringREF is a reference to the string. 
- [ ] The address of the string is displayed using the string variable, the stringPTR and the stringREF. 
- [ ] The variable content is displayed using the stringPTR and the stringREF.

Yes No

---

### Exercise 03: Unnecessary violence

The objective of this exercise is to understand that pointers and references present some small differences that make them less or more appropriate depending on the use and the lifecycle of the object used.

#### Makefile and tests

- [ ] There is a Makefile that compiles using the appropriate flags. 
- [ ] There is at least a main to test the exercise.

Yes No

#### Weapon

- [ ] There is a Weapon class that has a type string, a getType() and a setType(). 
- [ ] The getType() function returns a const reference to the type string.

Yes No

#### HumanA and HumanB

- [ ] HumanA can have a reference or a pointer to the Weapon. 
- [ ] Ideally, it should be implemented as a reference, since the Weapon exists from creation until destruction, and never changes. 
- [ ] HumanB must have a pointer to a Weapon since the field is not set at creation time, and the weapon can be NULL.

Yes No

---

### Exercise 04: Sed is for losers

Thanks to this exercise, the student should have gotten familiar with ifstream and ofstream.

#### Makefile and tests

- [ ] There is a Makefile that compiles using the appropriate flags.
- [ ] There is at least a main to test the exercise.

Yes No

#### Exercise 04

- [ ] There is a function replace (or other name) that works as specified in the subject.
- [ ] The error management is efficient: try to pass a file that does not exist, change the permissions, pass it empty, etc.
- [ ] If you can find an error that isn't handled, and isn't completely esoteric, no points for this exercise.
- [ ] The program must read from the file using an ifstream or equivalent, and write using an ofstream or equivalent.
- [ ] The implementation of the function should be done using functions from std::string, no by reading the string character by character. This is not C anymore!

Yes No

---

### Exercise 05: Harl 2.0

The goal of this exercise is to use pointers to class member functions. Also, this is the opportunity to discover the different log levels.

#### Makefile and tests

- [ ] There is a Makefile that compiles using the appropriate flags.
- [ ] There is at least a main to test the exercise.

Yes No

#### Our beloved Harl

- [ ] There is a class Harl with at least the 5 functions required in the subject.
- [ ] The function complain() executes the other functions using a pointer to them.
- [ ] Ideally, the student should have implemented a way of matching the different strings corresponding to the log level to the pointers of the corresponding member function.
- [ ] If the implementation is different but the exercise works, you should mark it as valid. The only thing that is not allowed is using a ugly if/elseif/else.
- [ ] The student could have chosen to change the message Harl displays or to display the examples given in the subject, both are valid.

Yes No

---

### Exercise 06: Harl filter

Now that you are experienced coders, you should use new instruction types, statements, loops, etc. The goal of this last exercise is to make you discover the switch statement.

#### Makefile and tests

- [ ] There is a Makefile that compiles using the appropriate flags. There is at least a main to test the exercise.

Yes No

#### Switching Harl Off

- [ ] The program harlFilter takes as argument any of the log levels ("DEBUG", "INFO", "WARNING" or "ERROR"). It should then display just the messages that are at the same level or above (DEBUG < INFO < WARNING < ERROR). This must be implemented using a switch statement with a default case. Once again, no if/elseif/else anymore please.

Yes No
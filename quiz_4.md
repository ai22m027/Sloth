# Questions

## What is a precompiled header? Name pros and cons:

A precompiled header (PCH) is a feature supported by some compilers that can speed up the compilation time of large software projects. A PCH is a file that contains compiled code for frequently used headers in a project. When compiling a source file, the compiler can use the precompiled code from the PCH instead of recompiling the header files every time. This can significantly reduce the overall build time of a project.

Pros:
- Faster build times: Since frequently used headers are precompiled, the compiler doesn't have to recompile them every time, which can save a lot of time.
- Better performance: By reducing build times, developers can iterate more quickly, which can lead to better performance of the final product.
- Reduced memory usage: By precompiling headers, the compiler can reduce the amount of memory it needs to compile a project, which can be especially helpful for large projects.

Cons:
- Increased build time for the first compilation: The first time a project is compiled, the compiler needs to create the precompiled header file, which can take some time.
- Potential for outdated code: If a header file changes frequently, the precompiled code may become outdated, which can lead to errors or unexpected behavior.
- Compiler-specific implementation: Precompiled headers are not supported by all compilers, and the way they are implemented can vary between compilers, which can lead to compatibility issues.

## Describe the layer of abstraction with your own words:

A layer of abstraction is a way to simplify a complex system by hiding details that are not relevant to the user. It is a way of thinking about a problem that separates different levels of complexity, allowing us to focus on one level at a time.

For example, a computer system has many layers of abstraction, including the hardware layer (e.g., CPU, memory, disk), the operating system layer (e.g., Windows, Linux, MacOS), and the application layer (e.g., web browsers, text editors, games). Each layer provides a set of abstractions that allow the user to interact with the system in a more intuitive and simplified way.

The main benefit of using layers of abstraction is that it allows developers to create more complex systems without needing to understand all the details of each layer. Each layer can be designed and implemented independently, which makes the system more modular and easier to maintain.

## Name the SOLID principles and describe them briefly:

SOLID is an acronym that stands for five design principles that can help make software systems more modular, flexible, and maintainable.

Here's a brief description of each principle:

- Single Responsibility Principle (SRP): A class or module should have only one reason to change, meaning that it should have a single responsibility or job. This principle helps to keep classes small and focused, which makes them easier to understand and maintain.

- Open/Closed Principle (OCP): A software module or class should be open for extension but closed for modification. This means that you should be able to add new functionality without changing the existing code. This principle promotes modularity and encourages the use of abstraction and interfaces.

- Liskov Substitution Principle (LSP): Subtypes should be substitutable for their base types, meaning that objects of a derived class should be able to replace objects of the base class without affecting the correctness of the program. This principle helps to ensure that the behavior of objects is predictable and consistent.

- Interface Segregation Principle (ISP): Clients should not be forced to depend on interfaces they do not use. This principle encourages the use of small, focused interfaces rather than large, monolithic interfaces, which can make code easier to understand, test, and maintain.

- Dependency Inversion Principle (DIP): High-level modules should not depend on low-level modules; both should depend on abstractions. Abstractions should not depend on details; details should depend on abstractions. This principle promotes loose coupling between modules and promotes the use of interfaces and dependency injection to manage dependencies.
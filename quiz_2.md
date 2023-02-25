# Questions

## Describe a logging system with your own words:

A logging system is a mechanism that records and stores events that occur within a software system or application. These events may include errors, warnings, or other types of messages that are generated during runtime. Logging systems typically provide a way for developers to retrieve and analyze the data stored in the logs, which can be used to identify and fix bugs or other issues. The logs may be stored locally or remotely, and can be viewed and analyzed using various tools and software.

## What is the difference between git submodules and git subtrees?

Git submodules and git subtrees are both mechanisms for managing dependencies within a Git repository, but they differ in their implementation and usage.

Git submodules are a way to include another Git repository as a subdirectory within a parent repository. This allows the parent repository to reference and use code from the subrepository, while still keeping them separate. The subrepository is treated as a separate entity and must be managed independently of the parent repository.

Git subtrees, on the other hand, allow you to include the contents of a remote repository directly into a subdirectory of your own repository. This means that the code from the remote repository becomes part of the parent repository and can be managed as a single entity.

In summary, git submodules are used to include a separate Git repository as a subdirectory within a parent repository, while git subtrees are used to include the contents of a remote repository directly into a subdirectory of the parent repository.

## What is a build system in C++? Name 3 build systems:

A build system in C++ is a software tool that automates the process of building and compiling source code into an executable program or library. Build systems typically provide a set of rules and instructions for compiling the code, linking external libraries, and generating the final executable.

1. CMake: a cross-platform build system that generates platform-specific build files from a single configuration file.
2. Make: a widely-used build system that reads a makefile to determine how to compile and link the source code.
3. Ninja: a fast and lightweight build system that is designed to work with large C++ projects.

## What is a package manager in C++? Name 3 package manager:

A package manager in C++ is a software tool that helps manage the installation, updating, and removal of third-party libraries and dependencies used in a C++ project. Package managers typically provide a centralized repository of pre-compiled libraries, along with tools to search and download these packages, and to manage their installation and configuration.

1. Conan: an open-source, decentralized package manager for C++ that supports multiple repositories and package formats.
2. vcpkg: a cross-platform package manager for C++ libraries that integrates with Microsoft Visual Studio and other IDEs.
3. Homebrew: a package manager for macOS that supports a wide range of open-source software, including C++ libraries and dependencies.
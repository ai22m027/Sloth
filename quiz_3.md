# Questions

## What is the difference between a dynamic linked library and a static library?

Static libraries are linked directly into the executable binary at compile time. This means that the library code becomes part of the final executable and can be used by the application without any further dependencies. Static libraries tend to be larger in size than their dynamic counterparts, but they offer faster startup times and better performance.

Dynamic linked libraries, on the other hand, are loaded at runtime by the operating system or application loader. This means that the library code is not actually part of the application executable, but is rather linked to it at runtime. Dynamic libraries tend to be smaller in size and allow multiple applications to share the same library code, reducing the overall memory footprint of the system.

## Describe a logging system with your own words:

A logging system is a tool that is used to record information about the behavior of an application or system. It allows developers to keep track of events, errors, and other important information that can be used for debugging, performance analysis, and other purposes. A logging system typically involves defining various levels of logging, such as debug, info, warning, and error, which determine the severity of the information being logged. The logging system then writes this information to a designated log file or other output mechanism, such as a console or network stream. This log can be analyzed later to help diagnose problems, optimize performance, or gain insights into how the application is being used.

## What is a Design Pattern?

A design pattern is a reusable solution to a commonly occurring problem in software design. It is a generalizable and abstract solution that can be applied to different scenarios to solve similar problems. Design patterns provide a common language and a shared understanding of best practices among developers, which can improve code quality, maintainability, and efficiency. They are typically expressed as a set of guidelines, principles, or rules that can be used to design and implement software systems in a consistent and effective way.

## Name and describe 2 design patterns (except facade or adapter):

1. Observer Pattern: The Observer pattern is used to establish a one-to-many relationship between objects, where a change in the state of one object triggers updates to one or more dependent objects. The Observer pattern is useful in situations where multiple objects need to be notified of changes to a shared object, or where the system needs to decouple the object that is being observed from the objects that are observing it. In this pattern, the observed object maintains a list of its observers, and when its state changes, it notifies all its observers to update themselves.
2. The Mediator Pattern is a behavioral design pattern that defines an object that encapsulates the communication between a set of objects, called Colleagues. The Mediator Pattern promotes loose coupling by avoiding direct interactions between Colleagues and instead having them communicate through the Mediator. This pattern is useful when the interactions between Colleagues are complex and tightly coupled, making it difficult to maintain or extend the system.
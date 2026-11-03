# C++ Object-Oriented Programming Labs — INSA Rennes (EII, 2026-2027)

Lab work for the *Programmation Orientée Objet* course (EII07-POO). This first commit holds the
**starting templates provided by the course**. My solutions will be added lab by lab.

| Lab | Folder | Topic | Key concepts |
|-----|--------|-------|--------------|
| TP1 | [`tp1-rectangle-c`](tp1-rectangle-c) | From C to C++: the Rectangle struct becomes a class | class vs struct, `public`/`private`/`protected`, constructors, `const` methods & the implicit `this`, getters/setters, references instead of pointers, `operator<<`, `operator==` |
| TP2 | [`tp2-mystring`](tp2-mystring) | `MyString`, a simplified `std::string` | dynamic memory, **rule of 3** (copy constructor, `operator=`, destructor), self-assignment, `operator[]` (const & non-const), friend binary operators (`==`, `<`, `+`) and implicit conversion, iterators / `const_iterator`, `for_each` + lambda, `std::out_of_range` exceptions |
| TP3 | [`tp3-figure2d`](tp3-figure2d) | `Rectangle`, `Circle`, `Square` from an abstract `Figure2D` | inheritance, abstract classes & pure `virtual`, polymorphism, `std::vector`, iterators and range-`for`, `std::unique_ptr` / `make_unique`, `override` / `final` |
| TP4 | [`tp4-game`](tp4-game) | Two-player grid games (Power 4, Tic-Tac-Toe) | namespaces (`nsGame`), interface-like abstract class `Game`, **class templates** `GameT<W,H>`, specialization, factory design pattern, UML |

## Build

Each lab is a standalone CMake project:

```bash
cd tp4-game
cmake -B build && cmake --build build
./build/Game_template
```

> TP2 and TP3 currently only contain the provided `main.cpp`; the classes (`mystring.h`,
> `Rectangle.h`, `Circle.h`, …) are part of the work to do.

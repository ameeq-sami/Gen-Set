# GenSet

**GenSet** is a C++ project that implements a simple Set data structure using templates. It supports basic set operations like union, intersection, difference, and subset checking for any data type (e.g., int, char). This project demonstrates the power of **C++ templates** and basic **OOP principles** without using STL or external libraries.

---

## Features
- Generic: works with any data type (int, char, etc.)
- Add unique elements only
- Access elements by index
- Set union, intersection, and difference
- Subset checking
- Deep copying (copy constructor)
- Clean console display of sets
- No STL or external dependencies

## Menu Options
When you run the program, you'll see a menu with the following options:

1. **Input Sets**: Enter elements for two sets (choose int or char type). Input is locked after first entry.
2. **Display Sets**: Show the current sets.
3. **Union**: Display the union of the two sets.
4. **Intersection**: Display the intersection of the two sets.
5. **Difference (A - B)**: Elements in Set 1 not in Set 2.
6. **Difference (B - A)**: Elements in Set 2 not in Set 1.
7. **Check Subset**: Check if one set is a subset of the other.
8. **Exit**: Quit the program.

## How to Build & Run

Make sure you have a C++ compiler (like g++). Then run:
```bash
g++ main.cpp -o run
./run
```

## Example Usage
```
----- Set Operations Menu -----
1. Input Sets
2. Display Sets
3. Union
4. Intersection
5. Difference (A - B)
6. Difference (B - A)
7. Check Subset
8. Exit
Enter your choice: 1
Press a for integer set:
Press b for character set:
a
-- Enter Elements of Set 1 --
Enter Size of Set:
3
Enter 0th element of set:
1
Enter 1th element of set:
2
Enter 2th element of set:
3
-- Enter Elements of Set 2 --
Enter Size of Set:
2
Enter 0th element of set:
2
Enter 1th element of set:
4
...
```

## Project Structure
- `main.cpp`: Entry point, runs the menu.
- `standAloneFunc.h/cpp`: Menu and input logic.
- `sets.h/cpp`: Set class template and operations.



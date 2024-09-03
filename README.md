# Animal Farm Project

## Description
This project implements an "Animal Farm" system using C++. It demonstrates object-oriented programming concepts, including inheritance, polymorphism, and data structures (specifically, a singly linked list).

## Key Components

### Classes
- `Animal`: Base class for all animals
- `Mammal`: Inherits from `Animal`
- `Cat`: Inherits from `Mammal`
- `Node`: Base class for list nodes
- `List`: Abstract base class for list implementations
- `SinglyLinkedList`: Concrete implementation of a singly linked list
- `Weight`: Utility class for handling weight conversions and validations

### Enums
- `Gender`: Represents animal genders
- `Breed`: Represents cat breeds
- `Color`: Represents animal colors

### Key Features
- Animal creation and management
- Weight handling with multiple units (pounds, kilograms, slugs)
- Singly linked list implementation for storing animals
- Color and gender handling for animals

## How to Use

1. Include the necessary header files in your main.cpp:
   ```cpp
   #include "Cat.h"
   #include "SinglyLinkedList.h"
   ```

2. Create a `SinglyLinkedList` to store your animals:
   ```cpp
   SinglyLinkedList catDB;
   ```

3. Add cats to the list:
   ```cpp
   catDB.push_front(new Cat("Loki", Color::CREAM, true, Gender::MALE, 1.0));
   ```

4. Iterate through the list to perform operations:
   ```cpp
   for(Animal* pAnimal = (Animal*)catDB.get_first(); pAnimal != nullptr; pAnimal = (Animal*)List::get_next((Node*)pAnimal)) {
       cout << pAnimal->speak() << endl;
   }
   ```

5. Validate and dump the list contents:
   ```cpp
   catDB.validate();
   catDB.dump();
   ```

6. Clean up by deleting all nodes:
   ```cpp
   catDB.deleteAllNodes();
   ```

## Building the Project

This project uses standard C++ and should be compatible with most C++ compilers. To build:

1. Ensure you have a C++ compiler installed (e.g., g++, clang, MSVC)
2. Compile all .cpp files together. For example, using g++:
   ```
   g++ *.cpp -o animal_farm
   ```
3. Run the executable:
   ```
   ./animal_farm
   ```

## Notes

- This project uses C++11 features. Ensure your compiler supports C++11 or later.
- The project includes extensive error checking and validation to ensure data integrity.
- Weight conversions between pounds, kilograms, and slugs are supported.

## Future Improvements

- Add more animal types
- Implement sorting for the linked list
- Add file I/O to save and load animal data
- Create a user interface for easier interaction with the system

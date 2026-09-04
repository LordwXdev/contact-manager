WELCOME TO MY NEW PROJECT
# Contact Manager

A simple contact management system built in C and C++ for learning and practice.

## What It Does

This project helps you store and manage basic contact information. You can add, view, edit, and delete contacts. It's a straightforward command-line tool designed to practice core programming concepts.

## Features

- Add new contacts
- View all contacts
- Search for specific contacts
- Edit contact information
- Delete contacts
- Save contacts to a file
- Load contacts from a file

## Requirements

- C/C++ compiler (GCC, Clang, or MSVC)
- Make (optional, for building)
- Linux, macOS, or Windows

## Building

### Using Make (if Makefile exists)

```bash
make
```

### Manual compilation

For C:
```bash
gcc -o contact-manager *.c
```

For C++:
```bash
g++ -o contact-manager *.cpp
```

### On Windows

```bash
g++ -o contact-manager.exe *.cpp
```

## Running

After building, run the program:

```bash
./contact-manager
```

On Windows:
```bash
contact-manager.exe
```

## Usage

Once the program starts, follow the menu options to manage your contacts. The command-line interface will guide you through each action.

## Project Structure

```
contact-manager/
├── README.md
├── main.c (or .cpp)
├── contact.c / contact.cpp
├── contact.h
└── Makefile (optional)
```

## Learning Goals

This project covers:

- Basic file I/O operations
- Data structures (arrays or linked lists)
- Command-line interface design
- Memory management
- Input validation
- CRUD operations (Create, Read, Update, Delete)

## Future Improvements

- Add sorting by name or phone number
- Implement search by multiple fields
- Add duplicate checking
- Support for more contact fields (email, address, etc)
- Better error handling

## Notes

This is a learning project. The code prioritizes clarity and understanding over optimization or production-ready features.

## Author

LordwXdev

## License

Feel free to use this for learning and practice.

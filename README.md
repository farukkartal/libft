*This project has been created as part of the 42 curriculum by fakartal.*

# Libft

## Description
**Libft** is the first project of the 42 curriculum. The goal is to create a C library from scratch. Since standard libraries are often not allowed in 42 projects, this library serves as a collection of essential functions. It includes tools for string manipulation, memory management, and linked lists that will be used in future projects.

## List of Functions

### Part 1 - Libc Functions
Standard C library functions.

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isdigit` | Checks for a digit (0-9). |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isascii` | Checks for an ASCII character. |
| `ft_isprint` | Checks for any printable character. |
| `ft_strlen` | Calculates the length of a string. |
| `ft_memset` | Fills memory with a constant byte. |
| `ft_bzero` | Zeroes a byte string. |
| `ft_memcpy` | Copies memory area. |
| `ft_memmove` | Copies memory area (safe for overlap). |
| `ft_strlcpy` | Copies string with size limit. |
| `ft_strlcat` | Concatenates string with size limit. |
| `ft_toupper` | Converts char to uppercase. |
| `ft_tolower` | Converts char to lowercase. |
| `ft_strchr` | Locates first occurrence of character. |
| `ft_strrchr` | Locates last occurrence of character. |
| `ft_strncmp` | Compares two strings. |
| `ft_memchr` | Scans memory for a character. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_strnstr` | Locates a substring in a string. |
| `ft_atoi` | Converts string to integer. |
| `ft_calloc` | Allocates memory and zeroes it. |
| `ft_strdup` | Duplicates a string. |

### Part 2 - Additional Functions
Useful functions for string manipulation.

| Function | Description |
| :--- | :--- |
| `ft_substr` | Returns a substring from a string. |
| `ft_strjoin` | Concatenates two strings. |
| `ft_strtrim` | Trims characters from start and end. |
| `ft_split` | Splits a string into an array. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character (new string). |
| `ft_striteri` | Applies a function to each character (void). |
| `ft_putchar_fd` | Outputs a char to a file descriptor. |
| `ft_putstr_fd` | Outputs a string to a file descriptor. |
| `ft_putendl_fd` | Outputs a string + newline to a file descriptor. |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor. |

### Part 3 - Linked List Functions
Functions to manipulate linked lists.

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning. |
| `ft_lstsize` | Counts the number of nodes. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstadd_back` | Adds a node at the end. |
| `ft_lstdelone` | Deletes a single node. |
| `ft_lstclear` | Deletes and frees the list. |
| `ft_lstiter` | Applies a function to each node. |
| `ft_lstmap` | Creates a new list by applying a function. |

## Instructions

### Requirements
* GCC compiler
* Make
* Unix-based operating system (Linux/macOS)

### Compilation and Make Commands

| Command | Description |
| :--- | :--- |
| `make` or `make all` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Recompiles the library from scratch |

## Usage

### 1. Include Header
First, include the header file in your source code:

```c
#include "libft.h"
```
### 2. Compile Your Program
To compile your program with the library, use this command:
```c
cc -Wall -Wextra -Werror main.c libft.a -o program
```
## Resources

### References
* [42 Cursus Guide](https://42-cursus.gitbook.io/guide) - Comprehensive guide for the curriculum.
* [CS50 Manual](https://manual.cs50.io/) - Clear explanations of standard C functions.
* [W3Schools C Functions](https://www.w3schools.com/c/c_functions.php) - Tutorials on C functions.
* [Python Tutor](https://pythontutor.com/index.html) - Visualizing code execution and memory.

### AI Usage
As permitted by the subject, AI tools were used for educational purposes:
* **Concept Visualization:** To visualize abstract concepts like Linked Lists and understand node manipulation with concrete examples.
* **Memory Management:** To better understand the behavior of memory functions (e.g., `memmove` vs `memcpy`) and pointer arithmetic.
* **Algorithmic Logic:** To brainstorm logic and pseudo-code for complex algorithms without generating the actual C code.
* *Note: No code was copy-pasted. All functions were implemented manually to ensure full understanding.*

## Author
**fakartal** - [fakartal@student.42istanbul.com.tr](mailto:fakartal@student.42istanbul.com.tr)


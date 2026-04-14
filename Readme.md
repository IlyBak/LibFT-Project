*This project has been created as part of the 42 curriculum by bilyas.*

## Description

**LibFT** is a foundational C library developed as part of the 1337/42 school curriculum. This project implements a comprehensive collection of utility functions commonly used in C programming. The library recreates standard C library functions (from `<string.h>`, `<stdlib.h>`, `<ctype.h>`, etc.) from scratch, providing students with a deeper understanding of low-level programming, memory management, and string manipulation.

### Goals

- Develop a solid understanding of C fundamentals
- Implement essential utility functions used throughout the 42 curriculum
- Create reusable code for future 42 projects
- Master memory allocation, string operations, and character handling
- Build a personal toolkit for C programming

## Instructions

### Compilation

To compile the library, simply run:

```bash
make
```

This will compile all source files and create `libft.a`, a static archive library.

#### Available Make targets:

- `make` or `make all` — Compile the library
- `make clean` — Remove object files
- `make fclean` — Remove object files and the library
- `make re` — Clean and recompile

### Installation & Linking

The generated `libft.a` static library can be linked to any C project:

```bash
gcc -o my_program my_program.c -L. -lft
```

Ensure `libft.h` is included in your source files:

```c
#include "libft.h"
```

### Compilation Flags

The library is compiled with strict flags to ensure code quality:

```
-Wall -Werror -Wextra
```

## Library Reference

LibFT provides **29 functions** organized in the following categories:

### Character Classification Functions
- `ft_isalpha()` — Check if character is alphabetic
- `ft_isdigit()` — Check if character is a digit
- `ft_isalnum()` — Check if character is alphanumeric
- `ft_isascii()` — Check if character is ASCII
- `ft_isprint()` — Check if character is printable
- `ft_toupper()` — Convert character to uppercase
- `ft_tolower()` — Convert character to lowercase

### Memory Functions
- `ft_memset()` — Fill memory with a constant byte
- `ft_bzero()` — Set memory to zero
- `ft_memcpy()` — Copy memory area
- `ft_memmove()` — Move memory area (handles overlapping regions)
- `ft_memchr()` — Locate byte in memory
- `ft_memcmp()` — Compare memory areas
- `ft_calloc()` — Allocate and initialize memory

### String Length & Search
- `ft_strlen()` — Get string length
- `ft_strchr()` — Locate character in string
- `ft_strrchr()` — Locate last occurrence of character
- `ft_strncmp()` — Compare first n characters of strings
- `ft_strnstr()` — Locate substring

### String Manipulation
- `ft_strdup()` — Duplicate string
- `ft_strlcpy()` — Copy string with size limit
- `ft_strlcat()` — Concatenate strings with size limit
- `ft_substr()` — Extract substring
- `ft_strjoin()` — Concatenate two strings
- `ft_strtrim()` — Remove leading/trailing characters
- `ft_split()` — Split string by delimiter
- `ft_strmapi()` — Apply function to string characters
- `ft_striteri()` — Apply function to string with index

### Conversion Functions
- `ft_atoi()` — Convert string to integer
- `ft_itoa()` — Convert integer to string

### File Descriptor Output Functions
- `ft_putchar_fd()` — Output character to file descriptor
- `ft_putstr_fd()` — Output string to file descriptor
- `ft_putendl_fd()` — Output string with newline to file descriptor
- `ft_putnbr_fd()` — Output number to file descriptor

## Example Usage

```c
#include "libft.h"

int main(void)
{
    // String operations
    char *str = ft_strdup("Hello, World!");
    size_t len = ft_strlen(str);
    
    // Memory operations
    int *arr = ft_calloc(10, sizeof(int));
    ft_memset(arr, 0, 10 * sizeof(int));
    
    // String manipulation
    char *result = ft_strtrim("  Hello  ", " ");
    
    // String splitting
    char **words = ft_split("hello world test", ' ');
    
    // Output
    ft_putstr_fd("Output: ", 1);
    ft_putendl_fd(result, 1);
    
    free(arr);
    free(str);
    free(result);
    return (0);
}
```

## Resources

### Official Documentation
- [C Standard Library Reference](https://en.cppreference.com/w/c/header)
- [POSIX Specification](https://pubs.opengroup.org/onlinepubs/9699919799/)
- [Linux man pages - string.h](https://man7.org/linux/man-pages/man0/string.h.0p.html)
- [Linux man pages - stdlib.h](https://man7.org/linux/man-pages/man0/stdlib.h.0p.html)
- [Linux man pages - ctype.h](https://man7.org/linux/man-pages/man0/ctype.h.0p.html)

### Learning Materials
- [C Programming Full Course for free - Bro Code](https://www.youtube.com/watch?v=xND0t1pr3KY)
- [C Memory Management - Portfolio Courses](https://www.youtube.com/@PortfolioCourses)
- [String Handling in C](https://www.cprogramming.com/tutorial/string.html)
- [Understanding Pointers](https://www.cprogramming.com/tutorial/pointers.html)

### Related 42 Projects
This library serves as foundation for:
- ft_printf
- get_next_line
- Unix system projects

## Technical Notes

- **Memory-safe** — Proper handling of edge cases and buffer overflows
- **POSIX-compliant** — Follows standard C library conventions
- **Static library** — Easy to link and reuse across projects

## AI Usage

**AI tools were used in the development of this project for better understanding of the fundumentals.** But All implementations were manually coded to ensure understanding of low-level C programming concepts and memory management principles essential to the 42 curriculum.

---

For more information about 42 School, visit [42school.com](https://www.42school.com/).
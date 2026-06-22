*This project has been created as part of the 42 curriculum by smaragat.*

**Description**
- **Project goal**: A personal implementation of common C library functions required by the 42 `libft` project. The goal is to learn C fundamentals, pointer manipulation, memory management, and to produce a reusable static library.
- **Overview**: This repository contains implementations of memory, string, character, and linked-list utilities that mirror the behavior of the standard C library where applicable. The code follows the 42 subject constraints and includes a header with prototypes and a Makefile to build `libft.a`.

**Library (detailed)**
- **Header & build**: See [libft.h](libft.h) for all function prototypes and [Makefile](Makefile) for build rules.
- **Memory**: `ft_bzero`, `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **String**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`, `ft_strcpy`, `ft_strcmp`.
- **Character & conversion**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_islower`, `ft_toupper`, `ft_tolower`, `ft_atoi`, `ft_itoa`.
- **I/O helpers**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Linked lists**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

**Instructions**
- **Build the library**: From the repository root run:

```bash
make
# Produces libft.a
```

- **Clean**:

```bash
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # rebuild
```

- **Using the library**: Link `libft.a` into your projects with `-L`/`-l` or by copying the static library and header into your project include/lib paths. Example:

	Include the header in your source file:
	```c
	#include "libft.h"
	```
	Compile your project linking the library:

	```bash
	cc -L. -lft -I. your_program.c -o your_program
	```

**Resources**
- **References**:
	- https://www.gnu.org/software/libc/manual/ -> additional reference for standard functions
	- https://man7.org/linux/man-pages/ -> Linux man-pages
	- https://www.freebsd.org/cgi/man.cgi ->  reference for BSD-specific functions (strlcpy, strlcat, bzero)
- **Tutorials**: online C tutorials covering pointers, memory allocation, and string handling.
- **AI usage**: AI was used as an auxiliary tool throughout this project to help develop reasoning, critical thinking, and organization.

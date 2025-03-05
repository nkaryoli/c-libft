# Libft - 42 Barcelona

**Libft** is the first project in my 42 curriculum, where I createD my own C library. It serves as the foundation for future projects, providing essential functions that will be reuse throughout my journey at 42.

---

## Table of Contents
1. [Introduction](#introduction)
2. [Project Overview](#project-overview)
3. [Functions Implemented](#functions-implemented)
4. [Installation](#installation)
5. [Usage](#usage)
6. [License](#license)

---

## Introduction

The **libft** project is designed to help you understand the basics of C programming, memory management, and the importance of writing efficient and reusable code. You will reimplement a set of standard C library functions, as well as additional utility functions, from scratch.

---

## Project Overview

The goal of this project is to create a static library (`libft.a`) containing a collection of functions that mimic the behavior of standard C library functions and provide additional utilities. This library will be used in future 42 projects.

---

## Functions Implemented

### Standard C Library Functions
- **String Manipulation**:
  - `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
  - `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strlcat`
  - `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`

- **Character Checks**:
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
  - `ft_toupper`, `ft_tolower`

- **Memory Allocation**:
  - `ft_memalloc`, `ft_memdel`

### Additional Functions
- **String Manipulation**:
  - `ft_strnew`, `ft_strdel`, `ft_strclr`, `ft_striter`, `ft_striteri`, `ft_strmap`, `ft_strmapi`
  - `ft_strequ`, `ft_strnequ`, `ft_strsub`, `ft_strjoin`, `ft_strtrim`, `ft_strsplit`

- **Output**:
  - `ft_putchar`, `ft_putstr`, `ft_putendl`, `ft_putnbr`
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

- **Linked Lists**:
  - `ft_lstnew`, `ft_lstdelone`, `ft_lstdel`, `ft_lstadd`, `ft_lstiter`, `ft_lstmap`

---

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/libft.git

2. Navigate to the project directory:
   ```bash
   cd libft

3. Compile the library::
   ```bash
   make
   
## Usage
To use the libft library in your project:

1. Include the libft.h header file in your source code:
   ```bash
   #include "libft.h"

2. Compile your program with the libft.a library:
   ```bash
   gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program

## License
This project is part of the 42 curriculum and is licensed under the 42 License. See the LICENSE file for details.

Good luck with your journey at 42 Barcelona! 🚀

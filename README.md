# 🧠 libft — 42 School Project

The **libft** project is the first step in the 42 School curriculum.
Its goal is to make your **own C library** — a collection of basic functions that you’ll use in future projects.

You will rebuild common C library functions (`strlen`, `memcpy`, etc.) and also create some new ones (like `ft_strdup`, `ft_substr`, etc.).
This helps you understand how memory, strings, and pointers really work in the C language.

---

## 🚀 Project Goals

* Recreate useful C functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>`.
* Learn how to handle **memory**, **pointers**, and **strings** safely.
* Practice clean code, compilation with a `Makefile`, and building a static library (`libft.a`).
* Reuse your library in all your next projects at 42.

---

## 🧩 Library Structure

Your repository usually looks like this:

```
libft/
 ├─ Makefile
 ├─ libft.h
 ├─ ft_isalpha.c
 ├─ ft_strlen.c
 ├─ ft_memcpy.c
 ├─ ft_memmove.c
 ├─ ft_strlcpy.c
 ├─ ft_bzero.c
 ├─ ...
```

When you run `make`, it builds a static library file:

```
libft.a
```

You can link this file with your C programs later:

```bash
cc main.c libft.a -o my_program
```

---

## 🧠 Part 1 — Basic Functions (Rebuilt Standard Library)

Below are the main functions with **easy explanations and examples**.

---

### 🔤 Character Checks (ctype-like)

These return `1` if true, `0` if false.

| Function            | Description                                 | Example                                      |
| ------------------- | ------------------------------------------- | -------------------------------------------- |
| `ft_isalpha(int c)` | Checks if `c` is a letter (`A–Z` or `a–z`). | `ft_isalpha('A') → 1`, `ft_isalpha('7') → 0` |
| `ft_isdigit(int c)` | Checks if `c` is a digit (`0–9`).           | `ft_isdigit('5') → 1`, `ft_isdigit('A') → 0` |
| `ft_isalnum(int c)` | Checks if `c` is a letter or a digit.       | `ft_isalnum('b') → 1`, `ft_isalnum('?') → 0` |
| `ft_isascii(int c)` | Checks if `c` is in ASCII range (0–127).    | `ft_isascii('~') → 1`, `ft_isascii(200) → 0` |
| `ft_isprint(int c)` | Checks if `c` is a printable character.     | `ft_isprint(' ') → 1`, `ft_isprint(9) → 0`   |

---

### 🔠 Character Conversion

| Function            | Description                             | Example                 |
| ------------------- | --------------------------------------- | ----------------------- |
| `ft_toupper(int c)` | Converts lowercase letter to uppercase. | `ft_toupper('a') → 'A'` |
| `ft_tolower(int c)` | Converts uppercase letter to lowercase. | `ft_tolower('P') → 'p'` |

---

### 🧵 String Functions

| Function                                                      | Description                                                                                         | Example                                             |
| ------------------------------------------------------------- | --------------------------------------------------------------------------------------------------- | --------------------------------------------------- |
| `ft_strlen(const char *s)`                                    | Returns the length of the string.                                                                   | `"Hello"` → `5`                                     |
| `ft_strlcpy(char *dst, const char *src, size_t size)`         | Copies up to `size - 1` chars from `src` to `dst`, and always adds `'\0'`. Returns length of `src`. | Copies `"Hi"` to buffer of size 3 → `dst = "Hi"`    |
| `ft_strlcat(char *dst, const char *src, size_t size)`         | Appends `src` to end of `dst` (limited by `size`). Returns total length of both strings.            | `ft_strlcat("Hi", " there", 10)` → `"Hi there"`     |
| `ft_strncmp(const char *s1, const char *s2, size_t n)`        | Compares two strings up to `n` chars. Returns 0 if equal.                                           | `ft_strncmp("abc", "abd", 2)` → `0`                 |
| `ft_strchr(const char *s, int c)`                             | Finds first occurrence of char `c` in string `s`.                                                   | `ft_strchr("hello", 'e') → pointer to "ello"`       |
| `ft_strrchr(const char *s, int c)`                            | Finds last occurrence of char `c`.                                                                  | `ft_strrchr("banana", 'a') → pointer to "a"`        |
| `ft_strnstr(const char *big, const char *little, size_t len)` | Searches substring `little` in `big` within first `len` chars.                                      | `ft_strnstr("hello world", "lo", 5)` → `"lo world"` |

---

### 💾 Memory Functions

These work with **raw memory blocks**, not just strings.

| Function                                              | Description                                                | Example                                             |
| ----------------------------------------------------- | ---------------------------------------------------------- | --------------------------------------------------- |
| `ft_memset(void *b, int c, size_t len)`               | Fills a block of memory with byte `c`.                     | `ft_memset(buf, 0, 10)` → fills 10 bytes with zeros |
| `ft_bzero(void *s, size_t n)`                         | Sets `n` bytes to `0`. Equivalent to `memset(s, 0, n)`.    | Clears a buffer before use                          |
| `ft_memcpy(void *dst, const void *src, size_t n)`     | Copies `n` bytes from `src` to `dst` (no overlap allowed). | Copy 5 bytes from one array to another              |
| `ft_memmove(void *dst, const void *src, size_t n)`    | Safe copy for overlapping memory areas.                    | Move `"abcde"` → `"ababc"` correctly                |
| `ft_memchr(const void *s, int c, size_t n)`           | Finds first byte `c` in first `n` bytes of memory.         | Search for `'\0'` in a buffer                       |
| `ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares `n` bytes between two memory areas.               | Returns 0 if identical                              |

---

### 🔢 Conversions

| Function                   | Description                      | Example           |
| -------------------------- | -------------------------------- | ----------------- |
| `ft_atoi(const char *str)` | Converts a string to an integer. | `"1234"` → `1234` |
| `ft_itoa(int n)`           | Converts an integer to a string. | `-42` → `"-42"`   |

---

### 🧱 Memory Allocation

| Function                               | Description                                                    | Example                                   |
| -------------------------------------- | -------------------------------------------------------------- | ----------------------------------------- |
| `ft_calloc(size_t count, size_t size)` | Allocates memory for `count * size` bytes and sets all to `0`. | Allocate an array of 10 ints (all zeroed) |
| `ft_strdup(const char *s)`             | Returns a new string that’s a copy of `s`.                     | `"Hello"` → new copy in memory            |

---

## 🪢 Part 2 — Bonus: Linked List Functions

If you complete the mandatory part, you can implement linked list helpers.

| Function                                                          | Description                               |
| ----------------------------------------------------------------- | ----------------------------------------- |
| `ft_lstnew(void *content)`                                        | Creates a new list node.                  |
| `ft_lstadd_front(t_list **lst, t_list *new)`                      | Adds a node at the beginning of a list.   |
| `ft_lstadd_back(t_list **lst, t_list *new)`                       | Adds a node at the end of a list.         |
| `ft_lstsize(t_list *lst)`                                         | Counts how many nodes are in the list.    |
| `ft_lstlast(t_list *lst)`                                         | Returns the last node.                    |
| `ft_lstdelone(t_list *lst, void (*del)(void *))`                  | Deletes one node using a delete function. |
| `ft_lstclear(t_list **lst, void (*del)(void *))`                  | Deletes all nodes and frees memory.       |
| `ft_lstiter(t_list *lst, void (*f)(void *))`                      | Applies a function to all nodes.          |
| `ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list with modified content. |

---

## 🧰 How to Compile and Use

### 1️⃣ Build the library

```bash
make
```

### 2️⃣ Clean compiled files

```bash
make clean
make fclean
```

### 3️⃣ Rebuild everything

```bash
make re
```

### 4️⃣ Link with your own program

```bash
cc main.c libft.a -o my_program
```

### 5️⃣ Example test

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_strlen(\"Hello\") = %zu\n", ft_strlen("Hello"));
    return 0;
}
```

---

## 🌱 Why This Project Is Important

* It’s your first step toward becoming **independent in C**.
* You’ll stop depending on built-in library functions.
* You’ll understand how memory and strings are really stored.
* You’ll reuse this library in many future 42 projects (like `get_next_line`, `printf`, and `push_swap`).

---

## 🧾 Final Tip

Write clean code, add comments, and test every function.
Your `libft` will become your **personal toolbox** for every 42 project.

Happy coding! 🎉
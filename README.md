Here’s a clear and well-structured README description you can use for your **libft** project at 42 School.

---

# libft — 42 School Project

This project is part of the 42 School curriculum.
The goal is to build your own library of C functions from scratch — these functions mimic some standard C functions and add useful new ones.
By completing this project you improve your C programming skills, understand memory, pointers, strings, and gain a good foundation for future projects.

---

## 🚀 What You Build

You will create a static library called `libft.a` that includes a set of functions divided into two main parts:

### 1. Re-implemented Standard Functions

These functions replicate existing standard C library functions. You must match their behaviour exactly.

Examples of this category:

* **ft_isalpha(int c)** — returns `1` if `c` is an alphabetic character (`A–Z` or `a–z`), otherwise returns `0`.
* **ft_isdigit(int c)** — returns `1` if `c` is a digit (`0–9`), otherwise `0`.
* **ft_strlen(const char *s)** — returns the number of characters in the string `s` (not counting the terminating `'\0'`).
* **ft_memset(void *b, int c, size_t len)** — fills the first `len` bytes of memory area `b` with the byte value `c`.
* **ft_memcpy(void *dest, const void *src, size_t n)** — copies `n` bytes from memory area `src` to memory area `dest`. The areas must not overlap.
* **ft_memmove(void *dest, const void *src, size_t n)** — can copy `n` bytes when the source and destination overlap. It ensures safe copying in both directions.
* **ft_strlcpy(char *dst, const char *src, size_t size)** — copies up to `size − 1` characters from `src` to `dst`, ending with `'\0'`, and returns the total length of `src`.
* …and many more.

### 2. Additional and Bonus Functions

These functions go beyond the standard library and offer more advanced operations. Examples include:

* String manipulation (ft_strjoin, ft_split, ft_strdup)
* Memory allocation (ft_calloc)
* Linked list handling (ft_lstnew, ft_lstadd_back, ft_lstmap, …)
* Conversion routines (ft_itoa, ft_atoi)
  These may be part of the “bonus” section depending on your project subject.

---

## ✅ Why This Project Matters

* You learn **core C concepts**: pointers, memory, arrays, strings, and efficient use of types such as `size_t`, `unsigned char`, and `const`.
* You practice **code reuse and library creation**: instead of writing every function from scratch later, you already have a library.
* You develop **attention to detail**: your functions must behave exactly as the standard ones (or according to the subject’s requirements).
* You prepare for bigger 42 projects: having a reliable `libft.a` means you don’t reinvent the basic functions in every new project.

---

## 📁 How to Use This Library

1. Clone your repository:

   ```bash
   git clone <your-repo-url>
   cd libft
   ```
2. Build the library:

   ```bash
   make
   ```

   This should produce `libft.a`.
3. Link your library when compiling other programs:

   ```bash
   cc main.c libft.a -o my_program
   ```
4. To test individual functions, you can create a `tests.c` (or `main.c`) file that calls your function, compile it with the needed `.c` files, and run it:

   ```bash
   cc -Wall -Wextra -Werror tests.c ft_isalpha.c -o test_isalpha
   ./test_isalpha
   ```

---

## 📚 Notes on Coding Style

* Use tabs (`\t`) for indentation and align function declarations in your header file.
* Functions must be no more than 25 lines long (unless the subject allows more).
* All allocated memory must be freed appropriately (especially for bonus functions).
* Your code must compile without warnings (use `-Wall -Wextra -Werror`).

---

## 🧩 Structure of the Repository

```
libft/
 ├─ Makefile
 ├─ libft.h
 ├─ ft_isalpha.c
 ├─ ft_memset.c
 ├─ … other .c files …
 ├─ tests.c   (optional, for your own testing)
```

---

## 📌 Final Words

Completing the **libft** project is a great milestone in your C programming journey at 42 School.
It gives you a personal toolbox of reliable functions and teaches you how lower-level operations work.
Keep the code clean, test thoroughly, and enjoy the process of building your first quality C library.

Happy coding! 🎉

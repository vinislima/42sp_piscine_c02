# C 03

The functions in Module C 03 focus on replicating standard C library string operations. They include comparing strings (`ft_strcmp`, `ft_strncmp`), concatenating strings (`ft_strcat`, `ft_strncat`), finding substrings (`ft_strstr`), and managing string length during concatenation (`ft_strlcat`). These exercises aim to deepen understanding of string handling and manipulation in C.

- **`ft_strcmp`** - Recreates the behaviour of the `strcmp` function, comparing two strings lexicographically.
- **`ft_strncmp`** - Recreates the behaviour of the `strncmp` function, comparing up to `n` characters of two strings lexicographically.
- **`ft_strcat`** - Recreates the behaviour of the `strcat` function, appending the source string (`src`) to the end of the destination string (`dest`).
- **`ft_strncat`** - Recreates the behaviour of the `strncat` function, appending up to `n` characters of the source string (`src`) to the end of the destination string (`dest`).
- **`ft_strstr`** - Recreates the behaviour of the `strstr` function, locating the first occurrence of a substring (`to_find`) within a string (`str`).
- **`ft_strlcat`** - Recreates the behaviour of the `strlcat` function, appending a source string (`src`) to a destination string (`dest`) with size constraints, and returning the total length of the string it tried to create.

This module in the 42 C Piscine focuses on advanced string manipulation using functions that replicate behaviours from the C standard library. The tasks progress in difficulty, covering comparisons, concatenation, substring searches, and string length management.

Students must follow strict norms and submit only the required files to pass the automated grading system, Moulinette. Adherence to these guidelines ensures the code compiles and functions correctly under specific compiler flags (`-Wall -Wextra -Werror`).

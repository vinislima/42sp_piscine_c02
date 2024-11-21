# C 02

These functions primarily focus on string manipulation and aim to strengthen understanding of character operations, memory management, and pointer usage.

This set of exercises in the C 02 module of the 42 Piscine focuses on string manipulation and memory operations. It involves implementing custom versions of standard library functions (`strcpy`, `strncpy`, `strlcpy`) and utility functions to check string characteristics (e.g., whether strings contain only alphabetic, numeric, printable, uppercase, or lowercase characters). Other tasks include transforming strings (to uppercase, lowercase, or capitalising words), displaying non-printable characters in hexadecimal, and printing memory regions with a formatted representation.

The exercises increase in difficulty and aim to strengthen understanding of C strings, pointers, and memory management. Students must adhere to strict coding norms verified by the Moulinette and should submit their work as specified to pass the automated tests.

- **`ft_strcpy`** - Replicates the behaviour of the `strcpy` function, copying a source string (`src`) to a destination (`dest`).
- **`ft_strncpy`** - Replicates the behaviour of the `strncpy` function, copying up to `n` characters from a source string (`src`) to a destination (`dest`).
- **`ft_str_is_alpha`** - Returns `1` if the string contains only alphabetic characters or is empty, and `0` otherwise.
- **`ft_str_is_numeric`** - Returns `1` if the string contains only numeric characters or is empty, and `0` otherwise.
- **`ft_str_is_lowercase`** - Returns `1` if the string contains only lowercase letters or is empty, and `0` otherwise.
- **`ft_str_is_uppercase`** - Returns `1` if the string contains only uppercase letters or is empty, and `0` otherwise.
- **`ft_str_is_printable`** - Returns `1` if the string contains only printable characters or is empty, and `0` otherwise.
- **`ft_strupcase`** - Converts all the letters in a string to uppercase and returns the modified string.
- **`ft_strlowcase`** - Converts all the letters in a string to lowercase and returns the modified string.
- **`ft_strcapitalize`** - Capitalises the first letter of each word in a string while converting the rest to lowercase.
- **`ft_strlcpy`** - Replicates the behaviour of the `strlcpy` function, copying a source string to a destination and returning the length of the source string.
- **`ft_putstr_non_printable`** - Displays a string to standard output, replacing non-printable characters with their hexadecimal value preceded by `\`.
- **`ft_print_memory`** - Displays a memory area formatted into three columns: the hexadecimal address, the content in hexadecimal, and the printable characters.
## Usage
Uncomment the main and use the command below.
```c
cc -Wall -Wextra -Werror {file}
```
<details>
	<summary>Exercises:</summary>

- [ex00:](https://github.com/vinislima/42sp_piscine_c02/blob/main/ex00/ft_strcpy.c)

    ```c
    ```

 </details>

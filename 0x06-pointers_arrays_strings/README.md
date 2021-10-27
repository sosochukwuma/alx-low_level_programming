## C - More pointers, arrays and strings

* [holberton.h](./holberton.h): Header file containing prototypes for all
functions written in the project.

* 0-strcat.c: wrote a function that concatenates two strings and also adds a terminating null byte at end.

* 1-strncat.c: wrote a function that concatenates two strings using at most an inputted number of bytes and adds a terminating null byte at end, unless source string is longer than maximum byte number.

* 2-strncpy.c: wrote a function that copies a string, including the terminating null byte, using at most an inputted number of bytes. Such that if the length of the source string is less than the maximum byte number, the remainder of the destination string is filled with null bytes and that it works identically to the standard library function `strncpy`.

* 3-strcmp.c: wrote a function that compares two strings, returns the difference in bytes at point of difference and works identically to the standard library function `strcmp`.

* 4-rev_array.c: wrote a function that reverses the content of an array of integers.

* 5-string_toupper.c: wrote a function that changes all lowercase letters of a string to uppercase.

* 6-cap_string.c): wrote a function that capitalises all words of a string.

* 7-leet.c: wrote a function that encodes a string into 1337, without `switch` or ternary operations and using only one `if` and two loops. Replacing letters `a` and `A` with `4`, `e` and `E` with `3`, `o` and `O` with `0`, `t` and `T` with `7`, `l` and `L` with `1`.

* 100-rot13.c: wrote a function that encodes a string to rot13, without `switch` or ternary operations and using only one `if` and two loops.

* 101-print_number.c: wrote a function that prints an integer without using `long`, arrays, pointers, or hard-coded special values.

* 102-magic.c): wrote a program that prints `a[2] = 98` using pointer magic.

* 103-infinite_add.c: wrote a function that adds two numbers stored in strings to a buffer. With an assumption that strings are never empty and that numbers will always be positive, or 0 and that there are only digits stored in the number strings. And such that if result can be stored in the buffer, returns a pointer to the result, if not, returns `0`.

* 104-print_buffer.c: wrote a function that prints the content of an inputted number of bytes from a buffer. Such that it prints 10 bytes per line, starts with the position of the first byte in hexadecimal (8 chars), starting with `0`, each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space, each line shows the content of the buffer, prints the byte if it is printable; if not, prints `.`, each line ends with a new line `\n`, and if the inputted byte size is 0 or less, the function only prints a new line.
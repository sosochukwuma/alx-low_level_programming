## C - Bit manipulation

* _putchar.c: wrote a function that writes a character to `stdout`.

* main.h: a header file containing prototypes for all functions written in the project.

* 0-binary_to_uint.c: wrote a function that converts a binary number to an `unsigned int`.
  * The parameter `b` is a pointer to a string of `0` and `1` characters.
  * If `b` is `NULL` or there are one or more characters in `b` that are not `0` or `1` - returns `0`.
  * Otherwise - returns the converted number.

* 1-print_binary.c: wrote a function that prints the binary representation of a number.

* 2-get_bit.c: wrote a function that returns the value of a bit at a given index.
  * Indices start at `0`.
  * If an error occurs - returns `-1`.
  * Otherwise - returns the value of the bit at the given index.

* 3-set_bit.c: wrote a function that sets the value of a bit at a given index to `1`.
  * If an error occurs - returns `-1`.
  * Otherwise - returns `1`.

* 4-clear_bit.c: wrote a function that sets the value of a bit at a given index to `0`.
  * If an error occurs - returns `-1`.
  * Otherwise - returns `1`.

* 5-flip_bits.c: wrote a function that returns the number of bits needed to be flipped to get from one number to another.

* 100-get_endianness.c: wrote a function that checks the endianness.
  * If big-endian - returns `0`.
  * If little-endian - returns `1`.

* 101-password: made a file containing the password for the [crackme3](https://github.com/holbertonschool/0x13.c) executable.
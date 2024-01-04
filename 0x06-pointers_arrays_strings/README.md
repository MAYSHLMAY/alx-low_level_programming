# 0x06. C - More Pointers, Arrays, and Strings

This repository contains C programs that demonstrate the usage of pointers, arrays, and strings. Each program focuses on a specific task related to these concepts.

## List of Programs

1. `0-strcat.c`: Appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte. Returns a pointer to the resulting string `dest`.

2. `1-strncat.c`: The `_strncat` function is similar to the `_strcat` function, except that it will use at most `n` bytes from `src`, and `src` does not need to be null-terminated if it contains `n` or more bytes. Returns a pointer to the resulting string `dest`.

3. `2-strncpy.c`: Copies a string from `src` to `dest` with a maximum limit of `n` characters. If `src` is shorter than `n`, the remaining bytes in `dest` are filled with null bytes. Returns a pointer to the resulting string `dest`.

4. `3-strcmp.c`: Compares two strings, `s1` and `s2`. Returns an integer less than, equal to, or greater than zero if `s1` is found to be less than, equal to, or greater than `s2`, respectively.

5. `4-rev_array.c`: Reverses the content of an array of integers, `a`, with a given `n` number of elements.

6. `5-string_toupper.c`: Converts all lowercase letters of a string to uppercase.

7. `6-cap_string.c`: Capitalizes the first letter of each word in a string.

8. `7-leet.c`: Encodes a string into 1337 (leet) language.

9. `8-rot13.c`: Encodes a string using the ROT13 cipher.

10. `100-print_number.c`: Prints an integer.

11. `101-magic.c`: An exercise about pointers.

## Getting Started

To compile and run the programs, follow these steps:

1. Clone this repository to your local machine.
2. Navigate to the cloned directory.
3. Compile the desired program using a C compiler, such as GCC:

gcc -Wall -Werror -Wextra -pedantic <program_name.c> -o <output_name>

## Contributing

This repository is for educational purposes as part of the ALX Software Engineering program. Therefore, pull requests are not accepted. You are welcome to fork the repository and modify it for your personal use or to practice on your own.

## Author

This repository is maintained by Mikiyas Dawit. You can contact me at educationforlife424@gmail.com for any questions or inquiries.

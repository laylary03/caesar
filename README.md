# caesar.c

This is my implementation of the **Caesar cipher** from Harvard’s [CS50x](https://cs50.harvard.edu/x) course.

## 🔐 Problem Summary

A Caesar cipher encrypts plaintext by “rotating” each letter by a number of positions in the alphabet.

For example, with key `1`:

plaintext: HELLO
ciphertext: IFMMP

The program:
- Accepts a single positive integer as a command-line argument
- Validates the key
- Shifts only alphabetic characters
- Preserves casing (uppercase/lowercase)
- Leaves punctuation and spaces unchanged

## 🛠 Tech & Tools

- Language: C
- Concepts: strings, ASCII math, command-line arguments, loops
- Tools: `clang`, `make`, `check50`

## ✅ Check50 Result

Passed all test cases for `caesar`.

---

> Written as part of my CS50 portfolio – demonstrating mastery of string manipulation and basic encryption logic.



# Binary Translator

This project aims translates groups of 8-bit strings into their human readable string equivalents.
it can teach you how to divide a main problem that you're trying to solve into smaller manageable tasks and treat each one individually .

The procedure i followed is :

- Split a string of binaries by spaces
- Convert each 8-bit binary to its decimal integer
- Convert those integers to characters

## 2. Functions

### `split(char *string, int *outputSize)`

Splits the input string into separate 8-character binary substrings.

- Returns an array of strings and populates `outputSize` with the number of substrings.

### `binStringArrayToNumberArray(char** stringArray, int size)`

Converts each 8-bit binary substring into its decimal representation.

- Returns an array of integers.

### `numberArrayToCharString(int* intArray, int size)`

Converts an array of decimal integers to a single string.

- Returns a dynamically allocated string.

### `displayBinStringArray(...)`, `displayIntArray(...)`, and `displayCharArray(...)`

Helpful functions that print out the results in neatly formatted arrays.

## 3. How to Build a Similar Program

1. Parse Input: Read the binary data as a single string.
2. Split into Substrings: Create a function to split the string by spaces into multiple 8-bit segments.
3. Convert to Decimal: For each binary substring, convert it to decimal by iterating over bits and using powers of two.
4. Convert to Characters (Optional): If desired, convert the decimal values to ASCII characters to form readable text.
5. Print or Display: Write helper functions to show the binary, decimal, or character outputs.

## 4. main

1. the main function above contains 2 binary strings ive included to test and see the program execution , simply compile the main.c file with the src.c file and run the resulting executable.
2. I would encourage you after writing your own version , to experiment with giving inputs through the keyboard instead of hardcoding them into the main function.

Happy coding :)

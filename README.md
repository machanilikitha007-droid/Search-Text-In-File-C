# Search Text in File in C

## Project Description

A simple C program that searches for a word in a text file. The program reads the file line by line and displays the line number where the searched word is found.

## Features

- Open a text file in read mode
- Accept a word from the user
- Search for the word in the file
- Display the matching line
- Display the line number
- Handle words that are not found

## Technologies Used

- C
- File Handling
- Strings
- `fopen()`
- `fgets()`
- `strstr()`
- `fclose()`

## How to Run

1. Create a file named `search_text_file.c`.
2. Create a `data.txt` file in the same project folder.
3. Add some text to `data.txt`.
4. Compile the program using a C compiler.
5. Run the program.

Example using GCC:

```bash
gcc search_text_file.c -o search_text_file
./search_text_file

===== Search Text in File =====
Enter word to search: programming

Word found in line 1: C programming is interesting.
Word found in line 3: Pointers are useful in C programming.

Author

M.Likitha

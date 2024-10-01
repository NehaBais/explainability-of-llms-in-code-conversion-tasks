To convert this code from Go to C, we need to follow the conventions of the C programming language. This means that we will have to change the syntax and usage of some Go features to their equivalent in C. Here's the converted code:
```c
#include <stdio.h>

int main() {
    rename("input.txt", "output.txt");
    rename("docs", "mydocs");
    rename("/input.txt", "/output.txt");
    rename("/docs", "/mydocs");
    return 0;
}
```
Note that in C, the `rename` function is used to change the name of a file or directory. The first argument is the current name of the file or directory, and the second argument is the new name. In this code, we use the same naming convention as in Go: "input.txt" for the old name and "output.txt" for the new name.

It's also worth noting that in C, the `main` function is used to define the entry point of a program. It returns an integer value that represents the exit status of the program. In this case, we return 0 to indicate that the program has completed successfully.

Error: 
- The first error is due to incorrect inclusion of a header file. The correct way to include a header file in C is by using the angle brackets `<>` instead of the quotation marks `""`.
- The second error is due to a missing declaration for the `struct stat` variable, which is used to store information about a file or directory. The correct way to declare a variable is by adding a semicolon at the end of the line.
- The third and fourth errors are due to incorrect function declarations. The correct way to call a function is by using parentheses after its name.
- The fifth error is due to an undeclared library function `printf`. The correct way to call a library function is by including the header file for that function in your source code, and then calling it using the same syntax as any other C function.
Fix: 
- Replace all instances of `#include` with `<>`
- Replace all instances of the declaration for `struct stat st;` with `struct stat st;`
- Replace all instances of `stat("input.txt", &st)` with `stat("input.txt", &st)`
- Remove the `printf()` function call and its declaration
Rewritten code:
```c
#include
#include
int main() {
  struct stat st;

  if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("Input file exists.\n");
  } else {
    printf("Input file does not exist.\n");
  }

  if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    printf("Docs directory exists.\n");
  } else {
    printf("Docs directory does not exist.\n");
  }

  return 0;
}
```


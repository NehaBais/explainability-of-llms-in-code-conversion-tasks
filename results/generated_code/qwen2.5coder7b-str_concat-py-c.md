Sure! Below is the equivalent code in C. Note that in C, string handling is more manual compared to Python, and you need to use functions like `strcpy` and `strcat` from the standard library.

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize the first string variable
    char s1[] = "hello";

    // Concatenate another string literal to form a new string
    char s2[50];
    strcpy(s2, s1);
    strcat(s2, " world");

    printf("s1: %s\n", s1);  // Output: hello
    printf("s2: %s\n", s2);  // Output: hello world

    // Concatenate multiple strings using a loop and strcat
    char result[50];
    strcpy(result, s1);
    strcat(result, ", ");
    strcat(result, "world");
    strcat(result, ", ");
    strcat(result, "mom");

    printf("result: %s\n", result);  // Output: hello, world, mom

    return 0;
}
```

### Explanation:

1. **String Declaration and Initialization**:
   - `char s1[] = "hello";`: This declares a character array `s1` and initializes it with the string `"hello"`.

2. **Concatenation**:
   - `strcpy(s2, s1);`: This copies the content of `s1` to `s2`.
   - `strcat(s2, " world");`: This appends the string literal `" world"` to `s2`.

3. **Output**:
   - `printf("s1: %s\n", s1);`: Prints the value of `s1`.
   - `printf("s2: %s\n", s2);`: Prints the value of `s2`.

4. **Joining Multiple Strings**:
   - The process is repeated for joining multiple strings using a loop and `strcat`. This involves concatenating strings with ``, `, world,` and `mom`.

### Note:
- Ensure that the target buffer (e.g., `s2` or `result`) has enough space to hold the concatenated string. In this example, buffers of size 50 are used.
- The `strcpy` function is used for copying strings, and `strcat` is used for concatenating strings.

This code should work in a standard C environment like GCC.

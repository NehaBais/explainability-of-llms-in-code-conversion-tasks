 To convert the given Go code to C, we need to handle string interpolation using format specifiers in C. The `sprintf` function in C is analogous to the `fmt.Sprintf` function in Go for string formatting. Here's how you can achieve the same functionality in C:

```c
#include <stdio.h>

int main() {
    char str[] = "Mary had a %s lamb";
    char txt[] = "little";
    char out[100]; // Assuming the output string won't exceed 100 characters

    sprintf(out, str, txt);
    printf("%s\n", out);

    return 0;
}
```

In this C code:
- We define a format string `str` and a replacement string `txt`.
- We use the `sprintf` function to format the output string by replacing the placeholder in `str` with the content of `txt`.
- Finally, we print the formatted string using `printf`.

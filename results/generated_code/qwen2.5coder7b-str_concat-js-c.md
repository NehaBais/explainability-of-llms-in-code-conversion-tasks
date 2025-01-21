Here's how you can convert your JavaScript code into C:

```c
#include <stdio.h>

int main()
{
    // Create a string variable equal to any text value
    char s[] = "hello";

    // Create another string variable whose value is the original variable concatenated with another string literal
    char t[20];  // Ensure this array has enough space to hold the concatenated result
    sprintf(t, "%s there!", s);

    // Print out the content of both variables
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    return 0;
}
```

In C, strings are represented as arrays of characters. This code defines a character array `s` to hold the string "hello". Then, it creates another character array `t`, which has enough space to hold the result of concatenating `s` with the literal " there!" using `sprintf`. Finally, it prints out both `s` and `t`. Note that you need to include the `<stdio.h>` header file for the `printf` function and use the `sprintf` function for string formatting.

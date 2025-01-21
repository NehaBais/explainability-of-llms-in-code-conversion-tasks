 Here's the equivalent code in C that performs similar operations to those described in your Python script:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Create a string variable equal to any text value.
    char s1[] = "hello";
    
    // Create another string variable whose value is the original variable concatenated with another string literal.
    char s2[100];  // Assuming the maximum length of the new string will not exceed 99 characters + null terminator
    strcat(s1, " world");
    
    // To illustrate the operation, show the content of the variables.
    printf("%s\n", s1);
    printf("%s\n", s2);
    
    char s3[] = "hello";
    char s4[100];  // Assuming the maximum length of the new string will not exceed 99 characters + null terminator
    strcat(strcat(strcpy(s4, s3), ", world"), ", mom");
    
    printf("%s\n", s4);
    
    return 0;
}
```

In this C code:
- `char s1[] = "hello";` initializes a string variable.
- `strcat(s1, " world");` concatenates the string literal " world" to `s1`.
- The content of both variables is printed using `printf`.
- For the second part, `strcpy`, `strcat`, and additional string manipulations are used to concatenate multiple strings.

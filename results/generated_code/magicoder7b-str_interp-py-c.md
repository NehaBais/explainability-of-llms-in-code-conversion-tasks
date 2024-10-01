 The equivalent code in C would look like this:

```c
#include <stdio.h>
#define extra "big" //Defined values, similar to variables in Python
#define original_string "Mary had a %s lamb."

int main() {
    char new_str[100]; 
    
    // Interpolation or string formatting like Python's f-string feature
    sprintf(new_str, original_string, extra);
    printf("%s", new_str);
    return 0;
}
```

This code declares a constant `extra` with the value "big" (similar to the variable in Python), and another constant `original_string` which will be interpolated by `extra`. The `sprintf` function replaces the placeholder "%s" in `original_string` with `extra`'s value, resulting in `new_str`.

Note: It is important to remember that memory allocation for `new_str` is done manually. If the `original_string` contains more than one placeholders or too long string (longer than 100 characters), this code may cause buffer overflow and undefined behavior.

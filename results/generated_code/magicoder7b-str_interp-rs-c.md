 The equivalent code in C would be:

```c
#include <stdio.h>
#define STRINGIFY2(a, b) a ## b
#define STRINGIFY(a) STRINGIFY2(a, _)

int main() {
    printf("Mary had a %s lamb\n", "little");
    
    // You can specify order
    printf("%s had a %s lamb\n", "Mary", "little");
    
    // Or named arguments if you prefer. Note that C does not support named placeholders in string formatting, so we use numbers for placeholders. 
    printf(STRINGIFY(Mary) " had a %s lamb\n", "little");
    return 0;
}
```
In this code:
- STRINGIFY2 is used to concatenate two string fragments. It's required due to the way C deals with string literals, where adjacent string literals are treated as a single literal.
- The ## operator is a token paste operator in C, used to combine tokens or strings into one.
- STRINGIFY is a macro that takes a variable name and returns its stringified form (i.e., the variable's name as a string). We use this to print out the names of variables if we have them as strings.
 
Please note that, unlike Rust, C does not support named placeholders in string formatting. Thus, for named arguments, we use numbers (0 and 1) instead of "name" and "adj".

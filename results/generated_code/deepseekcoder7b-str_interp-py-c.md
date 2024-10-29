The equivalent C code for this Python snippet is:

```c
#include <stdio.h>

int main() {
    char extra[] = "little";
    char new_str[30] = ""; // An empty string in C should have enough space to contain the interpolated result
    
    sprintf(new_str, "Mary had a %s lamb.", extra); // Equivalent of Python's f-string interpolation
    
    printf("%s\n", new_str); 
  
    return 0;
}
```
This C code does the same thing as your Python snippet. `sprintf` is used to format and store a string in `new_str` similar to how an f-string would behave in Python. The result is then printed using `printf`. As with Python, %s inside sprintf replaces with the next set of arguments following it which should be a char* string here.

